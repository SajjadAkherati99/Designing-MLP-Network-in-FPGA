module Scrambler(Clk, Reset, data_in, initial_seed, tail_pad_length, data_out, rate, length);
	input Clk, Reset;
	input data_in;
	input [1:7] initial_seed;
	input [7:0] tail_pad_length;
	output data_out;
	output [3:0] rate;
	output [11:0] length;
	
	wire Clk, Reset;
	wire data_in;
	wire [1:7] initial_seed;
	wire [7:0] tail_pad_length;
	reg data_out;;
	reg [3:0] rate;
	reg [11:0] length;

	
	reg [1:7] seed;
	reg [15:0] counter;
	wire [15:0] data_len_bit;
	
	parameter signal_R = 2'd0, data_R = 2'd1, tail_pad_R = 2'd3, waiting = 2'd2;
	reg [1:0]state;
	
	assign data_len_bit = {length, 3'b0} + 4'd15;
	
	always @(posedge Clk) begin
		if(!Reset) begin
			counter <= 0;
			seed[2:7] <= initial_seed[1:6];
			seed[1] <= initial_seed[7] ^ initial_seed[4];
			state <= signal_R;
		end
		else begin
			case(state)
				signal_R: begin
					data_out <= data_in;
					
					if (counter < 16'd23)
						counter <= counter + 16'd1;
					else begin
						state <= data_R;
						counter <= 0;
					end
					
					if (counter < 16'd4) 
						rate <= {rate[2:0], data_in};
					
					if( (16'd4 < counter) &&  (counter < 16'd17))
						length <= {data_in, length[11:1]};
				end
				
				data_R: begin
					if(counter < data_len_bit) begin
						counter <= counter + 1'b1;
					end
					else begin
						state <= tail_pad_R;
						counter <= 0;
					end
					seed[1] <= seed[4] ^ seed[7];
					data_out <= data_in ^ seed[1];
					seed[2:7] <= seed[1:6];
				end
				
				tail_pad_R: begin
					if(counter < tail_pad_length) begin
						counter <= counter + 1'b1;
					end
					else begin
						state <= waiting;
					end
					if(counter < 16'd6)
						data_out <= data_in;
					else
						data_out <= data_in ^ seed[1];
					
					seed[1] <= seed[4] ^ seed[7];
					seed[2:7] <= seed[1:6];
				end
			endcase	
		end
	end


endmodule
