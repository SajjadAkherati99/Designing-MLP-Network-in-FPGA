`timescale 1ns / 1ps

module testbench;

	// Inputs
	reg signed[3:-12] Angle;
	reg Reset;
	reg Clk;

	// Outputs
	wire signed[3:-13] Tanh;
	
	// Variables
	reg state;
	integer op_out, op_MATLAB_test;
	real real_Tanh;
	real real_Angle;
	

	// Instantiate the Unit Under Test (UUT)
	CORDIC_tanh uut (
		.Angle(Angle), 
		.Reset(Reset), 
		.Clk(Clk), 
		.Tanh(Tanh)
	);

	initial begin
		// Initialize Inputs
		Angle = -16'd16384;
		Reset = 0;
		Clk = 1;
		state = 0;
		op_MATLAB_test = $fopen ("Verilog_FixedPoint_for_test_in_MATLAB.txt","w");
		op_out = $fopen ("Verilog_FixedPoint.txt","w");

		// Wait 100 ns for global reset to finish
		#10;
      Reset = 1'b1;
		// Add stimulus here
		#11796480;
		$fclose(op_out);
		$fclose(op_MATLAB_test);
		$finish();
	end
      
	always #5 Clk = ~Clk;
	always @(Tanh) begin
		if (state) begin
			real_Tanh = Tanh;
			real_Tanh = real_Tanh/ 8192;
			real_Angle = Angle;
			real_Angle = real_Angle/4096;
			$fwrite (op_MATLAB_test,"%.14f\n", real_Tanh);
			$fwrite(op_out, "CORDIC_tanh(%.12f) = %.13f; \n", real_Angle, real_Tanh);
			$display("CORDIC_tanh(%.12f) = %.13f; \n", real_Angle, real_Tanh);
			Angle = Angle + 1'b1;
		end
		state = !state;
	end
		
endmodule

