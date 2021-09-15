module conv_encoder(in, valid_in, Clk, reset, rate, AB, valid_out);
	input Clk, in, valid_in, reset;
	input [3:0] rate;
	output [1:0] AB;
	output [1:0] valid_out;
	
	wire Clk, in, valid_in, reset;
	wire [3:0] rate;
	reg [1:0] AB;
	reg [1:0] valid_out;
	
	reg [1:0] R;
	
	reg [4:0] counter;
	reg [1:6] state; 
	reg [1:0] s;
	
	parameter R12 = 2'd0, R23 = 2'd1, R34 = 2'd2;
	
	always @(rate) begin
		case (rate)
			4'b1101: R = R12;
			4'b1111:	R = R34;
			4'b0101:	R = R12;
			4'b0111: R = R34;
			4'b1001: R = R12;
			4'b1011: R = R34;
			4'b0001: R = R23;
			4'b0011: R = R34;
			default: R = R12;
		endcase
	end
	
	always @(posedge Clk) begin
		if(!reset) begin
			counter <= 0;
			state <= 0;
			s <= 0;
		end
		else begin
			if(valid_in) begin
				state[1] <= in;
				state[2:6] <= state [1:5];
				AB[1] <= in ^ state[2] ^ state[3] ^ state[5] ^ state[6];
				AB[0] <= in ^ state[1] ^ state[2] ^ state[3] ^ state[6];
				if (counter <= 5'd23)
					counter <= counter + 5'd1;
				
				if (counter < 5'd24) begin
					valid_out <= 2'b11;
				end
				else begin
					case(R)
						R12: begin
							valid_out <= 2'b11;					
						end
						
						R23: begin
							if (s[0]) begin
								valid_out <= 2'b10;
							end
							else begin
								valid_out <= 2'b11;
							end
							s[0] <= ~s[0];
						end
						
						R34: begin
							if (s == 0) begin
								s <= 2'b01;
								valid_out <= 2'b11;
							end
							if (s == 2'b01) begin
								s <= 2'b11;
								valid_out <= 2'b10;
							end
							if (s == 2'b11) begin
								s <= 2'b00;
								valid_out <= 2'b01;
							end
						end
					endcase
				end
			end
			else begin
				valid_out <= 2'b00;
			end
		end
	end

endmodule
