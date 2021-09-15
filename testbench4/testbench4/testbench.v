module testbench( tx_data, clk, reset, out);
input clk, reset;
output [7:0] out;
input [7:0]tx_data;

wire [7:0]rx_data;
wire rx_enable,  tx_ready;
wire rx, tx;
wire tx_enable;
basic_uart myUART(.clk(clk), .reset(~reset), .rx(rx),
.rx_data(rx_data), .rx_enable(rx_enable),
.tx_data(tx_data), .tx_enable(tx_enable),
.tx(tx), .tx_ready(tx_ready));

channel mychan(.in(tx), .clk(clk), .reset(reset), .out(rx));


parameter A=2'b00, B=2'b01, C= 2'b10, D=2'b11;
reg [1:0] y_now, y_next;

assign tx_enable= (y_now==A)?1'b1: 0;


always @(rx_enable, y_now, tx_ready)
begin
	case (y_now)
	A:begin
		if (tx_ready==0)
			y_next= A;
		else
			y_next= B;
	end
	B:begin
		y_next = A;
	end
	default : y_next=A;
	endcase
end


always @(posedge clk)
begin
	if (!reset)
		y_now <= A;
	else 
		y_now <= y_next;
end
	

assign out= (rx_enable==1'b1)? rx_data: out;


endmodule
