module tanh_i_ROM(i, tanh_i);
	input [4:0]i;
	output [3:-13]tanh_i;
	
	wire [4:0]i;
	reg signed[3:-13]tanh_i;
	
	always @(i) begin
		case(i)
			5'd0:		tanh_i = 17'd36908;
			5'd1:		tanh_i = 17'd34068;
			5'd2:		tanh_i = 17'd31228;
			5'd3:		tanh_i = 17'd28387;
			5'd4:		tanh_i = 17'd25544;
			5'd5:		tanh_i = 17'd22697;
			5'd6:		tanh_i = 17'd19841;
			5'd7:		tanh_i = 17'd16970;
			5'd8:		tanh_i = 17'd14065;
			5'd9:		tanh_i = 17'd11092;
			5'd10:	tanh_i = 17'd7970;
			5'd11:	tanh_i = 17'd4499;
			5'd12:	tanh_i = 17'd2092;
			5'd13:	tanh_i = 17'd1029;
			5'd14:	tanh_i = 17'd512;
			5'd15:	tanh_i = 17'd256;
			5'd16:	tanh_i = 17'd128;
			5'd17:	tanh_i = 17'd64;
			5'd18:	tanh_i = 17'd32;
			5'd19:	tanh_i = 17'd16;
			5'd20:	tanh_i = 17'd8;
			5'd21:	tanh_i = 17'd4;
			5'd22:	tanh_i = 17'd2;
			default: tanh_i = 0;
		endcase
	end
endmodule
