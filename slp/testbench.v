`timescale 1ns / 1ps


module testbench;

	// Inputs
	reg [7:0] tx_data;
	reg clk;
	reg reset;
	reg newdata;
	
	integer op, k;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sender uut (
		.tx_data(tx_data), 
		.clk(clk), 
		.newdata(newdata),
		.reset(reset), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		tx_data = 8'b00001000;
		CLK = 0;
		clk = 0;
		reset = 0;
		newdata = 0;
		op=$fopen ("test.txt","r");

		// Wait 100 ns for global reset to finish
		#15;
		reset = 1'b1;
	end
	
	
	always #10 clk = ~clk;
	
	initial 
		$display($time, " out = %b ", out);
		
		
	reg CLK;	
	always begin
		#200000 CLK = ~CLK;
	end
	always @(posedge CLK)
	begin
		k <= $fscanf(op, "%b\n", tx_data);
	end
	
	initial forever @(posedge CLK) begin
		newdata = 1'b1;
		#10 newdata = 0;
   end   
endmodule









