module channel(in, clk, reset, out);
input in, clk, reset;
output [7:0]out;



parameter A=4'b0000, B=4'b0001, C= 4'b0010, D=4'b0011, E=4'b0100, F=4'b0101, G= 4'b0110, H=4'b0111, I=4'b1000;
reg [3:0] y_now, y_next;

wire [15:0]gotocor;
wire [7:0] outcor;
assign  gotocor= (y_now==I)?s:gotocor;
cordic mycordic(.clk(clk), .reset(reset), .tanh(outcor), .in(gotocor));
defparam mycordic.n=7;



wire [7:0]tx_data,rx_data;
wire rx_enable,  tx_ready;
wire rx, tx;
wire tx_enable;
basic_uart myUART(.clk(clk), .reset(~reset), .rx(rx),
.rx_data(rx_data), .rx_enable(rx_enable),
.tx_data(tx_data), .tx_enable(tx_enable),
.tx(tx), .tx_ready(tx_ready));
assign rx = in; 
wire [7:0]num_of_vect;
assign num_of_vect = (y_now==A && rx_enable==1'b1)? rx_data:num_of_vect;


wire cs, we, oe;
reg [7:0]addr_count;
wire [7:0]address;
wire [7:0]data_out;
wire[7:0] data_in;
SPRAM weight( .clk(clk) , .address(address) , .data_in(data_in), .data_out(data_out), .cs(cs), .we(we) , .oe(oe));
assign address = addr_count;
assign we = (y_now==C)?	1'b1:0;
assign cs = (y_now==C || y_now==F)?	1'b1:0;
assign oe = (y_now==F)?	1'b1:0;
assign data_in = (y_now==B && rx_enable==1'b1)? rx_data: data_in;
wire [7:0]b;
assign b = (y_now==F )? data_out : b;


wire [7:0]a;
wire [15:0]s;
wire ce;
mulladd ut (
  .clk(clk), // input clk
  .ce(ce), // input ce
  .sclr(~reset), // input sclr
  .bypass(1'b0), // input bypass
  .a(a), // input [7 : 0] a
  .b(b), // input [7 : 0] b
  .s(s) // output [15 : 0] s
);
assign a = (y_now==E && rx_enable==1'b1)? rx_data:a;
assign ce = (y_now==F )? 1'b1:0;

always @(rx_enable, tx_ready, y_now)
begin
	case(y_now)
		A: begin
			addr_count = 0;
			if (rx_enable==1)
				y_next=B;
			else 
				y_next= A;
			end
		B:	begin
			if (rx_enable==0)
				y_next = B;
			else
				y_next = C;
			end
		C:	y_next = D;
		D: if (address == num_of_vect - 1'b1) begin
				addr_count = 0;
				y_next=E;
			end
			else begin
				y_next=B;
				addr_count = addr_count + 1'b1;
			end
		E:	begin
			if (rx_enable==0)
				y_next = E;
			else
				y_next = F;
			end
		F:	y_next = H;
		H: if ( address == num_of_vect)
				y_next = I;
			else begin
				addr_count = addr_count + 1'b1;
				y_next = E;
			end
		I: y_next = I;
		default: y_next = A;
	endcase
end


always @(posedge clk)
begin
	if (!reset)
	begin
		y_now<=A;
	end
	else begin
		y_now<= y_next;
	end
end

assign out = outcor;

endmodule
