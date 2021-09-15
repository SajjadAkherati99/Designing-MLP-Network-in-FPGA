`timescale 1ns / 1ps


module test;

	// Inputs
	reg in;
	reg clk;
	reg reset;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	serial uut (
		.in(in), 
		.clk(clk), 
		.reset(reset), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#11;
		reset=1;
		// Add stimulus her
	end
	initial begin
		#15 in= 1;
		#1000 $finish;
		$monitor($time, "output q = %b", out);
	end
	
	always #10 clk= ~clk;
		
      
endmodule

