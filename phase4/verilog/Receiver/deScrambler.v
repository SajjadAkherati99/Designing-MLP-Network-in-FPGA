module deScrambler(Clk, Reset, data_in, data_in_valid, data_out, data_out_valid);
	input Clk, Reset;
	input data_in, data_in_valid;
	output data_out, data_out_valid;
	
	wire Clk, Reset;
	wire data_in, data_in_valid;
	reg data_out, data_out_valid;

	
	reg [1:7] seed;
	reg [11:0] length;
	reg [14:0] counter;
	wire [14:0] data_len_bit;
	
	parameter signal_R = 2'd0, service_R = 2'd1, data_R = 2'd3, waiting = 2'd2;
	reg [1:0]state;
	
	assign data_len_bit = {length, 3'b0} - 1'b1;
	
	always @(posedge Clk) begin
		if(!Reset) begin
			counter <= 0;
			state <= signal_R;
			data_out_valid <= 0;
		end
		else begin
			if(data_in_valid) begin
				data_out_valid <= 1'b1;
				case(state)
					signal_R: begin
						data_out <= data_in;
						
						if (counter < 15'd23)
							counter <= counter + 15'd1;
						else begin
							state <= service_R;
							counter <= 0;
						end
						
						if( (15'd4 < counter) &&  (counter < 15'd17))
							length <= {data_in, length[11:1]};
					end
					
					service_R: begin
						if(counter < 15'd15) begin
							counter <= counter + 1'b1;
						end
						else begin
							state <= data_R;
							counter <= 0;
						end
						data_out <= 0;
						seed[1] <= data_in;
						seed[2:7] <= seed[1:6];
					end
					
					data_R: begin
						if(counter < data_len_bit) begin
							counter <= counter + 1'b1;
						end
						else begin
							state <= waiting;
							counter <= 0;
						end
						seed[1] <= seed[4] ^ seed[7];
						seed[2:7] <= seed[1:6];
						data_out <= data_in ^ seed[4] ^ seed[7];
					end
					
					waiting: begin
						data_out <= 0;
					end
				endcase
			end
			else begin
				data_out_valid <= 1'b0;
			end
		end
	end


endmodule
