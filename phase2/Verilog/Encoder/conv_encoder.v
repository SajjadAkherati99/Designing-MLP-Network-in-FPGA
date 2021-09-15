module conv_encoder(in, valid_in, Clk, reset, AB, valid_out);
	input Clk, in, valid_in, reset;
	output [1:0] AB;
	output [1:0] valid_out;
	
	wire Clk, in, valid_in, reset;
	reg [1:0] AB;
	reg [1:0] valid_out;
	
	reg [1:0] R;
	
	reg [1:6] state; 
	
	always @(posedge Clk) begin
		if(!reset) begin
			state <= 0;
		end
		else begin
			if(valid_in) begin
				state[1] <= in;
				state[2:6] <= state [1:5];
				AB[1] <= in ^ state[2] ^ state[3] ^ state[5] ^ state[6];
				AB[0] <= in ^ state[1] ^ state[2] ^ state[3] ^ state[6];
				valid_out <= 2'b11;
			end
		end
	end

endmodule
