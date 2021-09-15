`timescale 1ns / 1ps

module viterbi_decoder_tb;

	// Inputs
	reg Clk;
	reg reset;
	reg in;

	// Outputs
	wire out;
	wire valid_out;

	// 
	integer i, j, op_in, op_out;
	
	// Instantiate the Unit Under Test (UUT)
	viterbi_decoder uut (
		.Clk(Clk), 
		.reset(reset), 
		.in(in), 
		.out(out), 
		.valid_out(valid_out)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		reset = 0;
		in = 0;
		
		op_in = $fopen ("encoded_MATLAB.txt","r");
		op_out = $fopen ("decoded_verilog.txt","w");

		#7;
		reset = 1'b1;
		i = $fscanf (op_in, "%b", in);
		
		#500000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();
		
	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (reset) begin
			i <= $fscanf (op_in, "%b", in);
			if(valid_out == 1'b1) begin
				$fwrite (op_out," %b",out);
			end
		end
	end
      
endmodule

