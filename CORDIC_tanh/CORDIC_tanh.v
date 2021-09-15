module CORDIC_tanh(Angle, Reset, Clk, Tanh);
	input [3:-12]Angle;
	input Reset, Clk;
	output [3:-13]Tanh;
	
	wire signed [3:-12]Angle;
	wire Reset, Clk;
	wire signed [3:-13]Tanh;
	

	wire signed[3:-13] tanh_i;
	reg signed [3:-50]cosh_Angle;
	reg signed [3:-50]sinh_Angle;
	reg signed [3:-13]zed;
	reg [4:0]counter;
	reg[4:0]i;
	reg current_State;
	reg ready;
	reg negative_Iteration;
	parameter CORDIC_1 = 1'b0, CORDIC_2 = 1'b1;
	
	tanh_i_ROM stage0(i, tanh_i);
	
	always @(posedge Clk) begin
		if(!Reset || ready) begin
			sinh_Angle <= 0;
			cosh_Angle <= {{3{1'b0}}, {1'b1},{50{1'b0}}};
			zed <= (Angle <<< 1); 
			counter <= 5'd12;
			i <= 0;
			current_State <= CORDIC_1;
			negative_Iteration <= 1'b1;
			ready <= 0;
		end
		else begin
			i <= i + 1'b1;
			if (current_State == CORDIC_1)begin
				if (negative_Iteration) begin
					if (counter == 5'd2)begin
						counter <= 5'd1;
						negative_Iteration <= 1'b0;
					end
					else begin
						counter <= counter - 1'b1;
					end
				end
				else begin
					if (counter == 5'd11)begin
						current_State <= CORDIC_2;
						counter <= 5'd1;
					end
					else begin
						counter <= counter + 1'b1;
					end
				end
			end
			else begin
				if (counter == 5'd13)begin
					current_State <= CORDIC_1;
					ready <= 1;
				end
				else begin
					counter <= counter + 1'b1;
				end
			end
			case (current_State)
				CORDIC_1: begin
					if (zed < 0) begin
						if (negative_Iteration) begin
							cosh_Angle <= cosh_Angle - sinh_Angle + (sinh_Angle >>> (counter));
							sinh_Angle <= sinh_Angle - cosh_Angle + (cosh_Angle >>> (counter));
							zed <= zed + tanh_i;
						end
						else begin
							cosh_Angle <= cosh_Angle - (sinh_Angle >>> (counter));
							sinh_Angle <= sinh_Angle - (cosh_Angle >>> (counter));
							zed <= zed + tanh_i;
						end
					end
					else begin
						if (negative_Iteration) begin
							cosh_Angle <= cosh_Angle + sinh_Angle - (sinh_Angle >>> (counter));
							sinh_Angle <= sinh_Angle + cosh_Angle - (cosh_Angle >>> (counter));
							zed <= zed - tanh_i;
						end
						else begin
							cosh_Angle <= cosh_Angle + (sinh_Angle >>> (counter));
							sinh_Angle <= sinh_Angle + (cosh_Angle >>> (counter));
							zed <= zed - tanh_i;
						end
					end
				end
				
				CORDIC_2: begin
					if (sinh_Angle < 0) begin
						sinh_Angle <= sinh_Angle + (cosh_Angle >>> counter);
						if (counter == 5'd1) begin
							zed <= -({{3{1'b0}},{1'b1},{13{1'b0}}} >>> counter);
						end
						else begin
							zed <= zed - ({{3{1'b0}},{1'b1},{13{1'b0}}} >>> counter);
						end
					end
					else begin
						sinh_Angle <= sinh_Angle - (cosh_Angle >>> counter);
						if (counter == 5'd1) begin
							zed <= ({{3{1'b0}},{1'b1},{13{1'b0}}} >>> counter);
						end
						else begin
							zed <= zed + ({{3{1'b0}},{1'b1},{13{1'b0}}} >>> counter);
						end
					end
				end
			endcase
		end
	end
	
	assign Tanh = (ready == 1)? zed[3:-13]: 17'dz;
endmodule
