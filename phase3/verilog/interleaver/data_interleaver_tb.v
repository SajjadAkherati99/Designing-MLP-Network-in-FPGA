`timescale 1ns / 1ps
module data_interleaver_tb;

	// Inputs
	reg Clk;
	reg reset;
	reg [3:0] rate;
	reg A_in;
	reg B_in;
	reg AB_in_valid;

	// Outputs
	wire A_out;
	wire B_out;
	wire AB_out_valid;

	integer i;
	integer op_in, op_out;

	// Instantiate the Unit Under Test (UUT)
	data_interleaver uut (
		.Clk(Clk), 
		.reset(reset), 
		.rate(rate), 
		.A_in(A_in), 
		.B_in(B_in), 
		.AB_in_valid(AB_in_valid), 
		.A_out(A_out), 
		.B_out(B_out), 
		.AB_out_valid(AB_out_valid)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		reset = 0;
		rate = 4'b1001;
		AB_in_valid = 1'b1;

		op_in = $fopen ("encoded_MATLAB.txt","r");
		op_out = $fopen ("interleaved_verilog.txt","w");
		
		
		i = $fscanf (op_in, "%b", A_in);
		i = $fscanf (op_in, "%b", B_in);
		
		#7 reset = 1;
		
		#300000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();

	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (reset) begin
			i = $fscanf (op_in, "%b", A_in);
			i = $fscanf (op_in, "%b", B_in);
			if(AB_out_valid) begin
				$fwrite (op_out, " %b", A_out);
				$fwrite (op_out, " %b", B_out);
			end
		end
	end
      
endmodule

