module channel(in, clk, reset, out);
input in, clk, reset;
output out;


wire [7:0]tx_data,rx_data;
wire rx_enable,  tx_ready;
wire rx, tx;
wire tx_enable;

parameter A=2'b00, B=2'b01, C= 2'b10, D=2'b11;
reg [1:0] y_now, y_next;

wire [15:0]gotocor;
wire [7:0] outcor;

assign gotocor[15:8]=0;
assign  gotocor[7:0]= (rx_enable==1'b1)?rx_data:gotocor;

cordic mycordic(.clk(clk), .reset(reset), .tanh(outcor), .in(gotocor));
defparam mycordic.n=7;
reg [3:0]counter;

basic_uart myUART(.clk(clk), .reset(~reset), .rx(rx),
.rx_data(rx_data), .rx_enable(rx_enable),
.tx_data(tx_data), .tx_enable(tx_enable),
.tx(tx), .tx_ready(tx_ready));


assign tx_enable= (y_now==C || y_now==D)?1'b1:0;
assign tx_data= (y_now==C)? outcor: tx_data;


always @(rx_enable, tx_ready, y_now, counter)
begin
	case(y_now)
		A: begin
			if (rx_enable==1)
				y_next=B;
			else 
				y_next= A;
			end
		B:	begin
			if (counter < 4'd15)
				y_next = B;
			else
				y_next = C;
			end
		C:	y_next = D;
		D: if (tx_ready ==0)
				y_next=D;
			else
				y_next=A;
		default: y_next= A;
	endcase
end


always @(posedge clk)
begin
	if (!reset)
	begin
		y_now<=A;
		counter <= 0;
	end
	else begin
		y_now<= y_next;
		if (y_now==B)	counter <= counter + 1;
	end
end

assign rx= (y_now==A)?in: rx;
assign out = (y_now==D)? tx : 1'bz;

endmodule
