module data_deinterleaver(Clk, reset, rate, in, out, out_valid);
	input Clk, reset;
	input [3:0] rate;
	input in;
	output out;
	output out_valid;

	wire Clk, reset;
	wire [3:0] rate;
	wire in;
	reg out;
	reg out_valid;
	
	reg A;
	reg B;
	reg [0:191] SRL;
	reg [0:191] SRL_out;
	reg [3:0] counter16;
	reg [3:0] counter_rate;
	wire [3:0] counter_rate_high;
	reg [7:0] counter_send;
	wire [7:0] k;
	wire [7:0] N_CBPS;
	
	parameter preamble = 2'b00, signal = 2'b01, data = 2'b11, waiting = 2'b10;
	
	reg[1:0] state_receive;
	reg[1:0] state_send;
	
	assign N_CBPS = (rate == 4'b0101) ? 8'd95  : 
						 (rate == 4'b1001) ? 8'd191 :
					  							   8'd47  ;
	
	assign counter_rate_high = (rate == 4'b0101) ? 4'd5  : 
										(rate == 4'b1001) ? 4'd11 :
																  4'd2  ;
																  
	assign k = ((state_receive == data) && (rate == 4'b1001))
				  ?
						{{counter_rate[3:1]}, {counter_rate[0]^counter16[0]}, 4'b0} + counter16
				  :
						{{counter_rate}, 4'b0} + counter16;
	
	always @(posedge Clk) begin
		if(!reset) begin
			SRL <= 0;
			counter16 <= 0;
			counter_rate <= 0;
			state_receive <= preamble;
			state_send <= waiting;
		end
		else begin
			case (state_receive)
				preamble: begin
					SRL[0] <= in;
					SRL[1:191] <= SRL[0:190];
					if (({in, SRL[0:34]}^36'b111111110000000010101010101010101010) == 0)
						state_receive <= signal;
				end
				
				signal: begin
					SRL[k] <= in;
					if (counter_rate == 4'd2) begin
						counter_rate <= 0;
						if(counter16 == 4'd15) begin
							counter16 <= 0;
							state_receive <= data;
							state_send <= signal;
							SRL_out <= SRL;
							SRL_out[k] <= in;
						end
						else begin
							counter16 <= counter16 + 1'b1;
						end
					end
					else begin
						counter_rate <= counter_rate + 1'b1;
					end
				end
				
				data: begin
					SRL[k] <= in;
					if (counter_rate == counter_rate_high) begin
						counter_rate <= 0;
						if(counter16 == 4'd15) begin
							counter16 <= 0;
							state_receive <= data;
							state_send <= data;
							SRL_out <= SRL;
							SRL_out[k] <= in;
						end
						else begin
							counter16 <= counter16 + 1'b1;
						end
					end
					else begin
						counter_rate <= counter_rate + 1'b1;
					end
				end
			endcase
		end
	end
	
	always @(posedge Clk) begin
		if(!reset) begin
			counter_send <= 0;
			out_valid <= 0;
		end
		else begin
			case(state_send)
				signal: begin
					out <= SRL_out[counter_send];
					if(counter_send <= 8'd47)
						out_valid <= 1'b1;
					else
						out_valid <= 1'b0;
					if (counter_send < N_CBPS)
						counter_send <= counter_send + 1'b1;
					else 
						counter_send <= 0;
				end
				
				data: begin
					out <= SRL_out[counter_send];
					out_valid <= 1'b1;
					if (counter_send < N_CBPS)
						counter_send <= counter_send + 1'b1;
					else 
						counter_send <= 0;
				end
			endcase
		end
	end
endmodule
