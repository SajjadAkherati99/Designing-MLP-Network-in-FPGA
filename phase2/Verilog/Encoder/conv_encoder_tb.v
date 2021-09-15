`timescale 1ns / 1ps
module conv_encoder_tb;

	// Inputs
	reg in;
	reg valid_in;
	reg Clk;
	reg reset;
	
	// Outputs
	wire [1:0] AB;
	wire [1:0] valid_out;

	// 
	integer i, j, op_in, op_out;
	
	// Instantiate the Unit Under Test (UUT)
	conv_encoder uut (
		.in(in), 
		.valid_in(valid_in), 
		.Clk(Clk), 
		.reset(reset),
		.AB(AB), 
		.valid_out(valid_out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		valid_in = 1'b0;
		Clk = 0;
		reset = 0;

		op_in = $fopen ("scrambled_MATLAB.txt","r");
		op_out = $fopen ("encoded_verilog.txt","w");

		#7;
		reset = 1'b1;
		valid_in = 1'b1;
		i = $fscanf (op_in, "%b", in);
		
		#300000; 
		$fclose(op_in);
		$fclose(op_out);
		$finish();
	end
      
		always #5 Clk = ~Clk;
		
		always @(posedge Clk) begin
		if (reset) begin
			i <= $fscanf (op_in, "%b", in);
			if(valid_out == 2'b11) begin
				$fwrite (op_out," %b",AB[1]);
				$fwrite (op_out," %b",AB[0]);
			end
			else if(valid_out == 2'b10)
				$fwrite (op_out," %b",AB[1]);
			else if(valid_out == 2'b01)
				$fwrite (op_out," %b",AB[0]);
		end
	end
endmodule

