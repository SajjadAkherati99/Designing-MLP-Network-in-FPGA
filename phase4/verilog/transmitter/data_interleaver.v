module data_interleaver(Clk, reset, rate, A_in, B_in, AB_in_valid, A_out, B_out, AB_out_valid);
	input Clk, reset;
	input [3:0] rate;
	input A_in, B_in, AB_in_valid;
	output A_out, B_out;
	output AB_out_valid;

	wire Clk, reset;
	wire [3:0] rate;
	wire A_in, B_in, AB_in_valid;
	reg A_out, B_out;
	reg AB_out_valid;
	
	reg [0:191] SRL;
	reg [0:191] SRL_out;
	reg [3:1] counter16;
	reg [3:0] counter_rate;
	wire [3:0] counter_rate_high;
	reg [7:1] counter_send;
	wire [7:0] i;
	wire [7:0] N_CBPS_2;
	reg[2:0] counter;
	
	parameter preamble = 2'b00, signal = 2'b01, data = 2'b11, waiting = 2'b10;
	
	reg[1:0] state_receive;
	reg[1:0] state_send;
	reg second_permution;
	
	assign N_CBPS_2 = (rate == 4'b0101) ? 8'd47 : 
							(rate == 4'b1001) ? 8'd95 :
													  8'd23 ;
	
	assign counter_rate_high = (rate == 4'b0101) ? 4'd6  : 
										(rate == 4'b1001) ? 4'd12 :
																  4'd3  ;
																  
	assign i = (state_receive == signal)   ? 
				  ({{3'b0}, {counter16}, {2'b0}} + {{4'b0}, {counter16}, {1'b0}}) + counter_rate         : 
				  (counter_rate_high == 4'd6) ? 
				  ({{2'b0}, {counter16}, {3'b0}} + {{3'b0}, {counter16}, {2'b0}}) + counter_rate :
				  (counter_rate_high == 4'd12) ? 
				  ({{1'b0}, {counter16}, {4'b0}} + {{2'b0}, {counter16}, {3'b0}}) + counter_rate :
				  ({{3'b0}, {counter16}, {2'b0}} + {{4'b0}, {counter16}, {1'b0}}) + counter_rate 			;
	
	always @(posedge Clk) begin
		if(!reset) begin
			SRL_out[0:35] <= 36'b010101010101010101010000000011111111; //preamblr bits;
			SRL_out[36:191] <= 0;
			SRL <= 0;
			counter16 <= 0;
			counter_rate <= 0;
			state_receive <= signal;
			state_send <= preamble;
		end
		else begin
			if(AB_in_valid) begin
				case(state_receive)
					signal: begin
						SRL[i] <= A_in;
						SRL[i + 2'd3] <= B_in;
						if (counter16 == 3'd7) begin
							counter16 <= 0;
							if (counter_rate == 4'd2) begin
								counter_rate <= 0;
								state_receive <= data;
								SRL_out <= SRL;
								SRL_out[i] <= A_in;
								SRL_out[i + 2'd3] <= B_in;
								state_send <= signal;
							end
							else begin
								counter_rate <= counter_rate + 1'b1;
							end
						end
						else begin 
							counter16 <= counter16 + 1'b1;
						end
					end
					
					data: begin
						SRL[i] <= A_in;
						SRL[i + counter_rate_high] <= B_in;
						if (counter16 == 3'd7) begin
							counter16 <= 0;
							if (counter_rate == (counter_rate_high-1'b1)) begin
								counter_rate <= 0;
								SRL_out <= SRL;
								SRL_out[i] <= A_in;
								SRL_out[i + counter_rate_high] <= B_in;
								state_send <= data;
							end
							else begin
								counter_rate <= counter_rate + 1'b1;
							end
						end
						else begin 
							counter16 <= counter16 + 1'b1;
						end
					end
				endcase
			end
		end
	end
	
	always @(posedge Clk) begin
		if(!reset) begin
			counter_send <= 0;
			AB_out_valid <= 0;
			second_permution <= 0;
			counter <= 0;
		end
		else begin
			case(state_send)
				preamble: begin
					A_out <= SRL_out[{counter_send, 1'b0}];
					B_out <= SRL_out[{counter_send, 1'b1}];
					if(counter_send <= 7'd17)
						AB_out_valid <= 1'b1;
					else
						AB_out_valid <= 1'b0;
					if (counter_send < 7'd23)
						counter_send <= counter_send + 1'b1;
					else 
						counter_send <= 0;
				end
				
				signal: begin
					A_out <= SRL_out[{counter_send, 1'b0}];
					B_out <= SRL_out[{counter_send, 1'b1}];
					if(counter_send <= 7'd23)
						AB_out_valid <= 1'b1;
					else
						AB_out_valid <= 1'b0;
					if (counter_send < N_CBPS_2)
						counter_send <= counter_send + 1'b1;
					else 
						counter_send <= 0;
				end
				
				data: begin
					if (second_permution) begin
						A_out <= SRL_out[{counter_send, 1'b1}];
						B_out <= SRL_out[{counter_send, 1'b0}];
					end
					else begin
						A_out <= SRL_out[{counter_send, 1'b0}];
						B_out <= SRL_out[{counter_send, 1'b1}];
					end
					if(counter_send <= N_CBPS_2)
						AB_out_valid <= 1'b1;
					else
						AB_out_valid <= 1'b0;
					if (counter_send < N_CBPS_2)
						counter_send <= counter_send + 1'b1;
					else 
						counter_send <= 0;
					if (rate == 4'b1001) begin
						if (counter == 3'd5) begin
							second_permution <= ~second_permution;
							counter <= 0;
						end
						else begin
							counter <= counter + 1'b1;
						end
					end
				end
			endcase
		end
	end
endmodule
