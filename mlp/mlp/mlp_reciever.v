module mlp_reciever(in, clk, reset, out);
input in, clk, reset;
output [7:0]out;

wire [14:0] adrdres;



wire [7:0]tx_data,rx_data;
wire rx_enable,  tx_ready;
wire rx, tx;
wire tx_enable;

basic_uart myUART(.clk(clk), .reset(~reset), .rx(rx),
.rx_data(rx_data), .rx_enable(rx_enable),
.tx_data(tx_data), .tx_enable(tx_enable),
.tx(tx), .tx_ready(tx_ready));
assign rx = in; 

reg [3:0]counter=0;
wire [7:0] num_of_vect, num_of_layer, num_of_norons;
assign num_of_vect = (y_now==A && rx_enable==1'b1 && counter==0)? rx_data:num_of_vect;
assign num_of_layer = (y_now==A && rx_enable==1'b1 && counter==4'd1)? rx_data:num_of_layer;
assign num_of_norons = (y_now==A && rx_enable==1'b1 && counter==4'd2)? rx_data:num_of_norons;

wire [4:0] hidnor;
assign hidnor= ( num_of_layer == 2'b01 )? 0:
 ( num_of_layer == 2'b10 )? {{0},{num_of_norons}} :
 ( num_of_layer == 2'b10 )? {{num_of_norons},{0}} :
	{{0},{num_of_norons}} + {{num_of_norons},{0}};

wire [14:0] ram_space;
assign ram_space = num_of_norons * ( num_of_vect + 1'b1) + num_of_vect + hidnor;
reg [14:0] counter_ram;

parameter A=4'b0000, B=4'b0001, C= 4'b0010, D=4'b0011, E=4'b0100,
 F=4'b0101, G= 4'b0110, H=4'b0111, I=4'b1000, J=4'b1001, K=4'b1010;
reg [3:0] y_now, y_next;

wire cs, we, oe_a, oe_b;
wire [7:0]address_a, address_b;
wire [7:0]data_out_a, data_out_b;
wire[7:0] data_in;
SPRAM myram( .clk(clk) , .address_a(address_a) , .data_in(data_in),
								.data_out_a(data_out_a), .cs(cs), .we(we) , .oe_a(oe_a),
								.data_out_b(data_out_b), .oe_b(oe_b), .address_b(address_b));
assign we = ((y_now==C && rx_enable==1'b1) ||y_now==G )?	1'b1:0;
assign cs = ((y_now==C && rx_enable==1'b1) ||y_now==G )?	1'b1:0;
assign address_a = (y_now==J)? ram_space+counter :counter_ram;
assign data_in = (y_now==C && rx_enable==1'b1)? rx_data:
							(y_now==G )? slpout:0;
	





wire [14:0] inread, weightread;	
										
assign inread[14:0] = (y_now==E) ? (ram_space-num_of_vect) :
							(y_now==H) ? ram_space + num_of_norons : inread[14:0]; 
assign weightread[14:0] = (y_now==E) ? (counter*num_of_vect) :
									(y_now==H) ? weightread[14:0] + num_of_norons : 
									weightread[14:0];
reg [13:0] clk_counter;
wire [3:0] state;

assign state = y_now;

wire[7:0] slpout;
slp myslp(.clk(clk), .reset(reset), 
.state(state), .num_of_vect(num_of_vect), .num_of_norons(num_of_norons),
 .inread(inread), .weightread(weightread),
 .out(slpout));


assign out = (y_now==K)? out:0;


always @(y_now, rx_enable, clk_counter, counter, counter_ram)
begin
	case(y_now)
		A:	begin
			if (rx_enable == 1'b1)
				y_next = B;
			else
				y_next = A;
		end
		B:begin
			counter_ram = 0;
			if (counter == 4'd2)begin
				y_next = C;
				counter = 0;
			end
			else begin
				y_next = A;
				counter = counter + 1'b1;
			end	
		end
		C:begin
			if (rx_enable == 1'b1)
				y_next = D;
			else
				y_next = C;			
		end
		D:begin
			if (counter_ram == ram_space-1'b1)begin
				y_next = E;
			end
			else begin
				counter_ram = counter_ram + 1'b1;
				y_next = C;
			end
		end
		E:begin
			clk_counter = 0;
			if (counter == 4'd8)begin
				counter = 0;
				y_next = H;
			end
			else
				y_next = F;
		end
		F:begin
			if (clk_counter == 14'd10260)
				y_next = G;
			else begin
				clk_counter = clk_counter + 1'b1;
				y_next = F;
			end
		end
		G:begin
			counter = counter + 1'b1;
			y_next = E; 
			counter_ram = counter_ram + 1'b1;
		end
		H:begin
			clk_counter = 0;
			if (counter == 4'd8)begin
				counter = 0;
				y_next = K;
			end
			else
				y_next = I;			
		end
		I:begin
			if (clk_counter == 14'd100)
				y_next = J;
			else begin
				clk_counter = clk_counter + 1'b1;
				y_next = I;
			end
		end
		J:begin
			counter = counter + 1'b1;
			y_next = H;
		end
		K:begin
			y_next = K;
		end
		default: y_next = A;
	endcase
end

always @(posedge clk) begin	
	if(!reset)
		y_now <= A;
	else
		y_now <= y_next;
end 



endmodule
