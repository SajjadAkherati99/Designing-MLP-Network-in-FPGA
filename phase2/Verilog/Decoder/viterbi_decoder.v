module viterbi_decoder(Clk, reset, in, /*valid_in,*/ out, valid_out);
	
	input Clk, reset, in/*, valid_in*/;
	output out, valid_out;
	
	wire Clk, reset, in/*, valid_in*/;
	reg out, valid_out;

	reg A;
	reg B;
	
	reg [6:23] path_keeper [0:63];
	reg [6:23] path_keeper1 [0:63];
	reg [6:23] path_keeper2 [32:63];
	
	reg [0:23] best_path;
	reg [6:23] best_path1;
	reg [6:23] best_path2;
	
	reg [7:0] min_err1;
	reg [7:0] min_err2;
	
	reg [4:0] min_counter1;
	reg [5:0] min_counter2;
	
	reg [7:0] error_keeper [0:63];
	reg [7:0] error_keeper1 [0:63];
	reg [7:0] error_keeper2 [32:63];
	
	reg [5:0] counter;
	
	reg [4:0] counter1;
	reg [4:0] counter2;
	reg [4:0] out_counter;
	
	reg proccess;
	
	parameter [0:63] A0 = 64'b0101101010100101010110101010010110100101010110101010010101011010;
	parameter [0:63] B0 = 64'b0000111111110000111100000000111111110000000011110000111111110000;
	parameter [0:63] A1 = 64'b1010010101011010101001010101101001011010101001010101101010100101;
	parameter [0:63] B1 = 64'b1111000000001111000011111111000000001111111100001111000000001111;
	
	always @(posedge Clk) begin
		if(!reset) begin
			counter <= 0;
			proccess <= 0;
		end
		else begin
			if (counter <= 6'd47)
				counter <= counter + 1'b1;
			else begin
				counter <= 6'd1;
			end
			if(counter[0]) begin
				B <= in;
				proccess <= 1'b1;
			end
			else begin
				A <= in;
				proccess <= 0;
			end
		end
	end
	
	always @(posedge Clk) begin
		if(!reset) begin
			path_keeper[0] <= 0;
			error_keeper[0] <= 0;
		end
		else begin
			if (proccess) begin
				if ((error_keeper[0] + (A^A0[0]) + (B^B0[0])) < 
					 (error_keeper[1] + (A^A1[0]) + (B^B1[0]))) begin
					error_keeper[0] <= error_keeper[0] + (A^A0[0]) + (B^B0[0]);
					path_keeper[0] <= {{path_keeper[0][7:23]},1'b0};
				end
				else begin
					error_keeper[0] <= error_keeper[1] + (A^A1[0]) + (B^B1[0]);
					path_keeper[0] <= {{path_keeper[1][7:23]},1'b1};
				end
			end
		end
	end
	
	genvar i;
	generate
		for (i = 1; i<64; i= i+1) begin: Update_Launched_Blocks
			always @(posedge Clk) begin
				if(!reset) begin
					path_keeper[i] <= 0;
					error_keeper[i] <= 8'd48;
				end
				else begin
					if (proccess) begin
						if ((error_keeper[{{i}, 1'b0}[5:0]] + (A^A0[i]) + (B^B0[i])) < 
							 (error_keeper[{{i}, 1'b1}[5:0]] + (A^A1[i]) + (B^B1[i]))) begin
							error_keeper[i] <= error_keeper[{{i}, 1'b0}[5:0]] + (A^A0[i]) + (B^B0[i]);
							path_keeper[i] <= {{path_keeper[{{i}, 1'b0}[5:0]][7:23]},1'b0};
						end
						else begin
							error_keeper[i] <= error_keeper[{{i}, 1'b1}[5:0]] + (A^A1[i]) + (B^B1[i]);
							path_keeper[i] <= {{path_keeper[{{i}, 1'b1}[5:0]][7:23]},1'b1};
						end
					end
				end
			end
		end
	endgenerate
	
	genvar j;
	generate
		for (j = 0; j<64; j = j+1) begin: Update_Launched_Blocks1
			always @(posedge Clk) begin
				if (reset && counter == 6'd2) begin
					error_keeper1[j] <= error_keeper[j];
					path_keeper1[j] <= path_keeper[j];
				end
			end
		end
	endgenerate
	
	genvar k;
	generate
		for (k = 32; k<64; k = k+1) begin: Update_Launched_Blocks2
			always @(posedge Clk) begin
				if (reset && counter == 6'd2) begin
					error_keeper2[k] <= error_keeper1[k];
					path_keeper2[k] <= path_keeper1[k];
				end
			end
		end
	endgenerate
	
	always @(posedge Clk) begin
		if (!reset) begin
			counter1 <= 0;
			min_err1 <= 8'd255;
			min_counter1 <= 0;
		end
		else begin
			if (counter == 6'd2) begin
				min_err1 <= 8'd255;
				counter1 <= 0;
			end
			else begin
				if (counter1 < 5'd31)
					counter1 <= counter1 + 1'b1;
				if (error_keeper1[counter1] < min_err1) begin
					min_err1 <= error_keeper1[counter1];
					best_path1 <= path_keeper1[counter1];
					min_counter1 <= counter1;
				end
			end
		end
	end
	
	always @(posedge Clk) begin
		if (!reset) begin
			counter2 <= 0;
			min_err2 <= 8'd255;
			min_counter2 <= 0;
		end
		else begin
			if (counter == 6'd2) begin
				min_err2 <= min_err1;
				counter2 <= 0;
				best_path2 <= best_path1;
				best_path <= {best_path2, min_counter2[0], min_counter2[1],
								  min_counter2[2], min_counter2[3], min_counter2[4], min_counter2[5]};
				min_counter2 <= min_counter1;
			end
			else begin
				if (counter2 < 5'd31)
					counter2 <= counter2 + 1'b1;
				if (error_keeper2[6'd32 + counter2] < min_err2) begin
					min_err2 <= error_keeper2[6'd32 + counter2];
					best_path2 <= path_keeper2[6'd32 + counter2];
					min_counter2 <= 6'd32 + counter2;
				end
			end
		end
	end
	
	always @(posedge Clk) begin
		if (!reset) begin
			valid_out <= 0;
			out_counter <= 0;			
		end
		else begin
			if (counter == 6'd2)
				out_counter <= 0;
			else begin
				if (out_counter < 5'd24) begin
					out_counter <= out_counter + 1'b1;
					out <= best_path[out_counter];
					valid_out <= 1'b1;
				end
				else begin
					valid_out <= 1'b0;
				end
			end
		end
	end
endmodule
