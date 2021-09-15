`timescale 1ns / 1ps
module Receiver_tb;

	// Inputs
	reg Clk;
	reg reset;
	reg data_in;
	reg [3:0] rate;

	// Outputs
	wire data_out;
	wire data_out_valid;
	
	integer i;
	integer op_in, op_out;

	// Instantiate the Unit Under Test (UUT)
	Receiver uut (
		.Clk(Clk), 
		.reset(reset), 
		.data_in(data_in), 
		.rate(rate), 
		.data_out(data_out), 
		.data_out_valid(data_out_valid)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		reset = 0;
		rate = 4'b1001;

		op_in = $fopen ("transmitted_frame_MATLAB.txt","r");
		op_out = $fopen ("received_verilog.txt","w");
		
		
		i = $fscanf (op_in, "%b", data_in);
		
		#7 reset = 1;
		
		#600000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();

	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (reset) begin
			i = $fscanf (op_in, "%b", data_in);
			if(data_out_valid) begin
				$fwrite (op_out, " %b", data_out);
			end
		end
	end
      
endmodule

