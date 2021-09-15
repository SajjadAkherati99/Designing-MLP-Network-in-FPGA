module Receiver(Clk, reset, data_in, rate, data_out, data_out_valid);
	input Clk, reset;
	input data_in;
	input [3:0] rate;
	output data_out, data_out_valid;
	
	wire Clk, reset;
	wire data_in;
	wire [3:0] rate;
	wire data_out, data_out_valid;
	
	wire out_deinterleaver;
	wire out_deinterleaver_valid;
	
	wire out_decoder;
	
	reg state;
	reg descrambler_in_valid;
	reg [8:0] counter;
	parameter on_valid_data = 1'b0, valid_data = 1'b1;
	wire [8:0] thr;
	
	assign thr = (rate == 4'b1001) ? 9'd375 :
					 (rate == 4'b0101) ? 9'd279 :
				  							   9'd231 ;
	
	always @(posedge Clk) begin
		if(!reset) begin
			descrambler_in_valid <= 0;
			counter <= 0;
			state <= on_valid_data;
		end
		else begin
			case(state)
				on_valid_data: begin
					if (counter < thr)
						counter <= counter + 1'b1;
					else begin
						counter <= 0;
						state <= valid_data;
					end
				end
				
				valid_data: begin
					if (counter <= 8'd23) begin
						descrambler_in_valid <= 1'b1;
					end
					else begin
						descrambler_in_valid <= 0;
					end
					if (counter <= 8'd46) begin
							counter <= counter + 1'b1;
					end
					else begin
							counter <= 0;
					end
				end
			endcase
		end
	end
	
	data_deinterleaver Deinterleaving(
			.Clk(Clk),
			.reset(reset), 
			.rate(rate),
			.in(data_in),
			.out(out_deinterleaver),
			.out_valid(out_deinterleaver_valid)
		);

	viterbi_decoder Decoding(
			.Clk(Clk),
			.reset(reset),
			.in(out_deinterleaver),
			.valid_in(out_deinterleaver_valid),
			.out(out_decoder)
		);
		
	deScrambler Descrambling(
			.Clk(Clk),
			.Reset(reset),
			.data_in(out_decoder),
			.data_in_valid(descrambler_in_valid),
			.data_out(data_out),
			.data_out_valid(data_out_valid)
		);

endmodule
