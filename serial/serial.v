module serial(in, clk, reset, out);
input in, clk, reset;
output out;


wire [7:0]tx_data,rx_data;
wire rx_enable,  tx_ready;
wire rx, tx;
wire tx_enable;

parameter A=2'b00, B=2'b01, C= 2'b10, D=2'b11;
reg [1:0] y_now, y_next;



basic_uart myUART(.clk(clk), .reset(~reset), .rx(rx),
.rx_data(rx_data), .rx_enable(rx_enable),
.tx_data(tx_data), .tx_enable(tx_enable),
.tx(tx), .tx_ready(tx_ready));

assign tx_enable= (y_now==B || y_now==C)?1'b1:0;
assign  tx_data= (rx_enable==1'b1)?rx_data:tx_data;


always @(rx_enable, tx_ready, y_now)
begin
	case(y_now)
		A: begin
			if (rx_enable==1)
				y_next=B;
			else 
				y_next= A;
			end
		B:	y_next=C;
		C:	if (tx_ready ==0)
				y_next=C;
			else
				y_next=A;
		default: y_next= A;
	endcase
end


always @(posedge clk)
begin
	if (!reset)
		y_now<=A;
	else
		y_now<= y_next;
end

assign rx= (y_now==A)?in: rx;
assign out = (y_now==C)? tx : 1'bz;

endmodule
