module SPRAM ( clk , address_a, address_b , data_in, data_out_a, data_out_b, cs, we , oe_a, oe_b);
 // cs:chip select, we:Write/Read Enable, oe: Output Enable
	parameter DATA_WIDTH = 8 ;
	parameter ADDR_WIDTH = 15 ;
	parameter RAM_DEPTH = 1 << ADDR_WIDTH;
	input [ADDR_WIDTH-1:0] address_a, address_b ;
	input clk, cs, we, oe_a, oe_b ;
	input [DATA_WIDTH-1:0] data_in ;
	output [DATA_WIDTH-1:0] data_out_a, data_out_b ;
	reg [DATA_WIDTH-1:0] data_o1 = 0 ;
	reg [DATA_WIDTH-1:0] data_o2 = 0 ;
	reg [DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
	//Tri-state buffer, Output: When we = 0 (read), oe = 1, cs = 1 
	assign data_out_a = (cs && oe_a && !we) ? data_o1 : 8'b0;
	assign data_out_b = (cs && oe_b && !we) ? data_o2 : 8'b0;
	// CONTINUED
	// Memory Write : when we = 1, cs = 1
	always @ (posedge clk)
	begin
		if ( cs && we )
			mem[address_a] <= data_in;
		// Memory Read: when we = 0, oe = 1, cs = 1
		else if (cs && !we)
			if (oe_a)
				data_o1 <= mem[address_a];
			if (oe_b)
				data_o2 <= mem[address_b];
		end
endmodule
