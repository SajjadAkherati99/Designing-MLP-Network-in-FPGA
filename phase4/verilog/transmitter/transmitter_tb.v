`timescale 1ns / 1ps

module transmitter_tb;

	// Inputs
	reg Clk;
	reg reset;
	reg data_in;
	reg [1:7] initial_seed;
	reg [7:0] tail_pad_length;

	// Outputs
	wire A_out;
	wire B_out;
	wire AB_out_valid;

	integer i, j;
	integer op_in, op_pad, op_out;
	
	// Instantiate the Unit Under Test (UUT)
	transmitter uut (
		.Clk(Clk), 
		.reset(reset), 
		.data_in(data_in), 
		.initial_seed(initial_seed), 
		.tail_pad_length(tail_pad_length), 
		.A_out(A_out), 
		.B_out(B_out), 
		.AB_out_valid(AB_out_valid)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		reset = 0;
		initial_seed = 7'b1011101;
		
		op_in = $fopen ("frame.txt","r");
		op_pad = $fopen ("pad_length.txt","r");
		op_out = $fopen ("transmitted_verilog.txt","w");
		
		
		i = $fscanf (op_in, "%b", data_in);
		j = $fscanf(op_pad, "%d", tail_pad_length);
		
		#7 reset = 1;
		
		#300000; 
		$fclose(op_in);
		$fclose(op_pad);
		$fclose(op_out);
		$finish();
	end
	
	always #5 Clk = ~Clk;
	
	always @(posedge Clk) begin
		if (reset) begin
			i <= $fscanf (op_in, "%b", data_in);
			if(AB_out_valid) begin
				$fwrite (op_out, " %b", A_out);
				$fwrite (op_out, " %b", B_out);
			end
		end
	end
      
endmodule

