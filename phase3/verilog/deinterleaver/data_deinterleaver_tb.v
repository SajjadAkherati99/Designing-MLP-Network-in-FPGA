`timescale 1ns / 1ps
module data_deinterleaver_tb;
	// Inputs
	reg Clk;
	reg reset;
	reg [3:0] rate;
	reg in;

	// Outputs
	wire out;
	wire out_valid;

	integer i;
	integer op_in, op_out;

	// Instantiate the Unit Under Test (UUT)
	data_deinterleaver uut (
		.Clk(Clk), 
		.reset(reset), 
		.rate(rate), 
		.in(in), 
		.out(out), 
		.out_valid(out_valid)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		reset = 0;
		rate = 4'b1001;
		in = 0;

		op_in = $fopen ("interleaved_MATLAB.txt","r");
		op_out = $fopen ("deinterleaved_verilog.txt","w");
		
		
		i = $fscanf (op_in, "%b", in);
		
		#7 reset = 1;
		
		#600000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();

	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (reset) begin
			i = $fscanf (op_in, "%b", in);
			if(out_valid) begin
				$fwrite (op_out, " %b", out);
			end
		end
	end
      
endmodule

