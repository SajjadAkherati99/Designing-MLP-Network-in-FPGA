`timescale 1ns/1ns

module crccodetb();

reg cl= 1'b0;
always 
	cl= #5 ~cl;
	
reg clk= 1'b0;
always
	clk= #5 ~clk;
	
reg rst= 1'b0;
always 
	rst= #80 1'b1;
	
reg DECorEN;
reg [1:0]selectinputkind;
reg [29:0]IN;
reg [4:0]makingshift;
reg runclk;
reg [29:0]temp;
reg[9:0]out;
reg [3:0]counter;

initial begin
	IN = 0; 
	counter = 0;
	runclk = 0;
	DECorEN = 1'b1;
	selectinputkind =2'd3; 
end
always@( posedge cl ) begin
	case (DECorEN)
		0:	case(selectinputkind)
				0: begin
						IN[7:0] = 8'b11111111;
						runclk= 1'b1;
					end
				1:	if (counter == 0) begin
						IN[15:8] = 8'b10110001;
						counter = counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[7:0] = 8'b11010111;
						counter = 4'd0;
						runclk = 1'b1;
					end
				default:	if (counter == 0) begin
								IN[19:12] = 8'b10011001;
								counter = counter + 4'b0001;
							end
							else if (counter == 4'd1) begin
								IN[11:4] = 8'b11101011;
								counter = counter + 4'b0001;
							end
							else if (counter == 4'd2) begin
								IN[3:0] = 4'b0010;
								counter = 0;
								runclk= 1'b1;
							end
			endcase
		1: case(selectinputkind)
				0:	if (counter == 0) begin
						IN[11:4] = 8'b11100111;
						counter = counter + 4'b0001;
					end
					else if ( counter == 4'd1)begin
						IN[3:0] = 4'b1010;
						counter = 0;
						runclk= 1'b1;
					end
				1:	if (counter == 0) begin
						IN[23:16] = 8'b10110001;
						counter = counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[15:8] = 8'b11010111;
						counter = counter + 4'b0001;
					end
					else if (counter == 4'd2) begin
						IN[7:0] = 8'b01110001;
						counter = 0;
						runclk= 1'b1;
					end
					default:	if (counter == 0) begin
									IN[29:22] = 8'b00011001;
									counter = counter + 4'b0001;
								end
								else if (counter == 4'd1) begin
									IN[21:14] = 8'b11101011;
									counter = counter + 4'b0001;
								end
								else if (counter == 4'd2) begin
									IN[13:6] = 8'b00101000;;
									counter = counter + 4'b0001;
								end
								else if (counter == 4'd3) begin
									IN[5:0] = 6'b011110;
									counter = 0;
									runclk= 1'b1;
								end
			endcase
	endcase	
end

always @( posedge clk or negedge rst ) begin
	if (!rst)begin
		temp = IN;
		makingshift = 0;
		out = 0;
	end
	else if ( runclk == 1'b1 ) begin 
		case (DECorEN)
			0: case(selectinputkind)
				0: begin
						if ( temp[7]==0 )begin
							if ( makingshift < 5'd7 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd152;
						out = temp [12:3];
					end
				1: begin
						if ( temp[15]==0 )begin
							if ( makingshift < 5'd15 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd33664;
						out = temp [16:7];
					end
				default: begin
						if ( temp[19]==0 )begin
							if ( makingshift < 5'd19 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd812544;
						out = temp [18:9];
					end
				endcase
			1:	case (selectinputkind)
				0: begin
						if ( temp[11]==0)begin
							if ( makingshift<5'd7 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd2432;
						out = ( temp==0? 0 : 10'd1);
					end
				1: begin
						if ( temp[23]==0)begin
							if ( makingshift<5'd15 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd8617984;
						out = ( temp==0? 0 : 10'd1);
					end
				default: begin
						if ( temp[29]==0)begin
							if ( makingshift<5'd19 )begin
								temp = temp<<1;
								makingshift = makingshift + 5'd1;
							end
						end
						else temp = temp ^ 29'd832045056;
						out = ( temp==0? 0 : 10'd1);
					end
				endcase
		endcase
		end
		else	out= 0;
		end
endmodule
