`timescale 1ns / 1ps
module deScrambler_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg data_in;

	// Outputs
	wire data_out;
	
	
	integer i;
	integer op_in, op_out;

	// Instantiate the Unit Under Test (UUT)
	deScrambler uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		
		op_in = $fopen ("scrambled_MATLAB.txt","r");
		op_out = $fopen ("descrambled_verilog.txt","w");
		
		i = $fscanf (op_in, "%b", data_in);
		
		#7 Reset = 1;
		
		#300000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();
		
	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (Reset) begin
			i <= $fscanf (op_in, "%b", data_in);
			if((data_out == 1'b0) || (data_out==1'b1))
				$fwrite (op_out," %b",data_out);
		end
	end
      
endmodule

