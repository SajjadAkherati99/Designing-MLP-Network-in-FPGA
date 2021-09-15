module slp(clk , reset,
				state, num_of_vect, num_of_norons,
				inread, weightread,
				out);

	input clk, reset;
	input [3:0] state;
	input [7:0] num_of_vect, num_of_norons;
	input [14:0]inread, weightread;
	output [7:0]out;

	wire[14:0] address_a;
	wire[14:0] address_b;
	assign address_a = inread+counter_ram;
	assign address_b = weightread+counter_ram;
	reg [14:0] counter_ram;
	reg[14:0] counter;
	reg [3:0] clk_count;
	wire cs, we, oe_a, oe_b;
	wire [7:0]data_out_a, data_out_b;
	wire[7:0] data_in;
	SPRAM myram( .clk(clk) , .address_a(address_a) , .address_b(address_b),
					.data_in(data_in), .data_out_a(data_out_a), .cs(cs), .we(we) ,
					.oe_a(oe_a), .oe_b(oe_b), .data_out_b(data_out_b));
	assign oe_a = ((y_now==C ))?1'b1:0;
	assign oe_a = oe_b;
	assign cs = ((y_now==C ))?1'b1:0;
	
	
	
	wire [7:0]a, b;
	assign a= data_out_a;
	assign b= data_out_b;
	wire [15:0]s;
	wire ce;
	assign ce = (y_now==C)? 1'b1:0;
	mulladd ut (
		.clk(clk), // input clk
		.ce(ce), // input ce
		.sclr(~reset), // input sclr
		.bypass(1'b0), // input bypass
		.a(a), // input [7 : 0] a
		.b(b), // input [7 : 0] b
		.s(s) // output [15 : 0] s
	);
	
	
	
	
	parameter A=4'b0000, B=4'b0001, C= 4'b0010, D=4'b0011, E=4'b0100, F=4'b0101;
	reg [3:0] y_now, y_next;

	wire [15:0]gotocor;
	wire [7:0] outcor;
	assign  gotocor= (y_now==E)?s:gotocor;
	cordic mycordic(.clk(clk), .reset(reset), .tanh(outcor), .in(gotocor));
	defparam mycordic.n=7;


	
	assign out = (y_now==F)? outcor: out;			
	always @(y_now, state, counter, clk_count)
		begin
			case(y_now)
				A:begin
					counter = 0;
					if(state == 4'd5 || state == 4'd8)begin
						y_next = B;
						if (state == 4'd5) counter_ram = num_of_vect;
						else	counter_ram = num_of_norons;
					end
					else	y_next = A;
				end
				B:begin
					clk_count = 0;
					if(counter == counter_ram)
						y_next = E;
					else begin
						counter = counter + 1'b1;
						y_next = C;
					end
				end
				C:begin
					if(clk_count==4'd11)begin
						clk_count = 0;
						y_next = D;
					end
					else begin
						clk_count = clk_count + 1'b1;
						y_next = C;
					end
					end
				D:y_next = B;
				E:begin
					if (clk_count == 4'd15)
						y_next = F;
					else begin
						y_next = E;
						clk_count = clk_count + 1'b1;
					end
					end
				F:y_next = A;
				default: y_next = A;
			endcase
		end
				
		always @(posedge clk)
		begin
			if(!reset)
				y_now <= A;
			else
				y_now <= y_next;
		end
											

endmodule
