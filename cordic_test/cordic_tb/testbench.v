`timescale 1ns / 1ps

module testbench;

	// Inputs
	reg [7:-8] in;
	reg reset;
	reg clk;
	reg CLK;
	reg [9:0] counter;
	
	integer op, op_out, k , i;

	// Outputs
	wire [7:0] tanh;

	// Instantiate the Unit Under Test (UUT)
	cordic uut (
		.in(in), 
		.reset(reset), 
		.clk(clk), 
		.tanh(tanh)
	);
	defparam uut.n=7;

	initial begin
		// Initialize Inputs
		op=$fopen ("testcase.txt","r");
		op_out=$fopen ("Result.txt","w");
		reset = 1'b0;
		clk = 0;
		CLK = 0;
		counter = 0;
		i = 0;
		#15 reset= 1'b1;
		end
		
	always #800 CLK = ~CLK;
	always @(posedge CLK)
		begin
		k <= $fscanf (op, "%b", in);
		$fwrite (op_out,"%b\n",tanh);

	end
	
	always
		#10 clk = ~clk; //toggle clk every 5 time units
      
endmodule

