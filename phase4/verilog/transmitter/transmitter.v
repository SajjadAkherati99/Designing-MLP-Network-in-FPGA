module transmitter(Clk, reset, data_in, initial_seed, tail_pad_length, A_out, B_out, AB_out_valid);
	input Clk, reset;
	input data_in;
	input [1:7] initial_seed;
	input [7:0] tail_pad_length;
	output A_out, B_out;
	output AB_out_valid;
	
	wire Clk, reset;
	wire data_in;
	wire [1:7] initial_seed;
	wire [7:0] tail_pad_length;
	wire A_out, B_out;
	wire AB_out_valid;
	
	wire [3:0] rate;
	
	reg reset_encoder, reset_interleaver;
	
	wire data_out_scrambler;
	wire [1:0] AB;
	
	always @(posedge Clk) begin
		reset_encoder <= reset;
		reset_interleaver <= reset_encoder;
	end
	
	Scrambler scrambling(
			.Clk(Clk),
			.Reset(reset),
			.data_in(data_in),
			.initial_seed(initial_seed),
			.tail_pad_length(tail_pad_length),
			.data_out(data_out_scrambler),
			.rate(rate),
			.length()
		);
	
	conv_encoder convlutional_coding(
			.Clk(Clk),
			.reset(reset_encoder),
			.valid_in(1'b1),
			.in(data_out_scrambler),
			.AB(AB),
			.valid_out()
		);
		
	data_interleaver interleaving(
			.Clk(Clk),
			.reset(reset_interleaver),
			.rate(rate),
			.A_in(AB[1]),
			.B_in(AB[0]),
			.AB_in_valid(1'b1),
			.A_out(A_out),
			.B_out(B_out),
			.AB_out_valid(AB_out_valid)
		);

endmodule
