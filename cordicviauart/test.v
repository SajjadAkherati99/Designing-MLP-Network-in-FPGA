`timescale 1ns / 1ps


module test;

	// Inputs
	reg [7:0] tx_data;
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	testbench uut (
		.tx_data(tx_data), 
		.clk(clk), 
		.reset(reset), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		tx_data = 8'b11000000;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#15;
		reset = 1'b1;
		//#80000 $finish;
        
		// Add stimulus here

	end
	always #10 clk= ~clk;
	
	always @(out) tx_data= tx_data + 8'd53;
	initial
			$monitor("				please ignore the first ouput, this is for my latency");
	initial 
			$monitor(  $time, "	input = %b 		AND 	output = %b	", tx_data-8'd106, out);
		
      
endmodule

