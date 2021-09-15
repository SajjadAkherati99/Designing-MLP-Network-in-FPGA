module crcENandDEC( cl, clk, rst, in, out, DECorEN, selectinputkind);
input wire cl, rst, clk;
input DECorEN;
input [1:0]selectinputkind;
input wire [7:0]in;
reg runclk;
reg [29:0]IN=0;
reg [4:0]makingshift;
reg [29:0]temp;
output reg[9:0]out;
reg [3:0]counter=0;

always @(posedge cl)
begin
	case (DECorEN)
		0:	case(selectinputkind)
				0: begin
						IN[7:0] <= in;
						runclk= 1'b1;
					end
				1:	if (counter == 0) begin
						IN[15:8] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[7:0] <= in;
						counter <= 0;
						runclk= 1'b1;
					end
				3:	if (counter == 0) begin
						IN[19:12] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[11:4] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd2) begin
						IN[3:0] <= in[7:4];
						counter <= 0;
						runclk= 1'b1;
					end
			endcase
		1: case(selectinputkind)
				0:	if (counter == 0) begin
						IN[11:4] <= in;
						counter <= counter + 4'b0001;
					end
					else if ( counter == 4'd1)begin
						IN[3:0] <= in[7:4];
						counter <= 0;
						runclk= 1'b1;
					end
				1:	if (counter == 0) begin
						IN[23:16] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[15:8] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd2) begin
						IN[7:0] <= in;
						counter <= 0;
						runclk= 1'b1;
					end
				3:	if (counter == 0) begin
						IN[29:22] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd1) begin
						IN[21:14] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd2) begin
						IN[13:6] <= in;
						counter <= counter + 4'b0001;
					end
					else if (counter == 4'd3) begin
						IN[5:0] <= in[7:2];
						counter <= 0;
						runclk= 1'b1;
					end
			endcase
	endcase	
end

always @( posedge clk or negedge rst)
begin
		if (!rst)begin 
			makingshift <= 0;
			temp <= IN;
		end
		else if ( runclk == 1'b1 ) begin 
		case (DECorEN)
			0: case(selectinputkind)
				0: begin
						if ( temp[7]==0 )begin
							if ( makingshift < 5'd7 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd152;
						out <= temp [12:3];
					end
				1: begin
						if ( temp[15]==0 )begin
							if ( makingshift < 5'd15 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd33664;
						out <= temp [16:7];
					end
				3: begin
						if ( temp[19]==0 )begin
							if ( makingshift < 5'd19 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd812544;
						out <= temp [18:9];
					end
				endcase
			1:	case (selectinputkind)
				0: begin
						if ( temp[11]==0)begin
							if ( makingshift<5'd7 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd2432;
						out <= ( temp==0? 0 : 10'd1);
					end
				1: begin
						if ( temp[23]==0)begin
							if ( makingshift<5'd15 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd8617984;
						out <= ( temp==0? 0 : 10'd1);
					end
				3: begin
						if ( temp[29]==0)begin
							if ( makingshift<5'd19 )begin
								temp <= temp<<1;
								makingshift <= makingshift + 5'd1;
							end
						end
						else temp <= temp ^ 29'd832045056;
						out <= ( temp==0? 0 : 10'd1);
					end
				endcase
		endcase
		end
		else	out<= 0;
end
endmodule
 