module scrambler_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg data_in;
	reg [1:7] initial_seed;
	reg [7:0] tail_pad_length;

	// Outputs
	wire data_out;
	wire [3:0] rate;
	wire [11:0] length;
	
	integer i, j;
	integer op_in, op_pad, op_out;

	// Instantiate the Unit Under Test (UUT)
	Scrambler uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.data_in(data_in), 
		.initial_seed(initial_seed), 
		.tail_pad_length(tail_pad_length), 
		.data_out(data_out), 
		.rate(rate), 
		.length(length)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		initial_seed = 7'b1011101;
		
		op_in = $fopen ("frame.txt","r");
		op_pad = $fopen ("pad_length.txt","r");
		op_out = $fopen ("scrambled_verilog.txt","w");
		
		
		i = $fscanf (op_in, "%b", data_in);
		j = $fscanf(op_pad, "%d", tail_pad_length);
		
		#7 Reset = 1;
		
		#300000; 
		$fclose(op_in);
		$fclose(op_pad);
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

