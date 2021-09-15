module SPRAM ( clk , address , data_in, data_out, cs, we , oe);
 // cs:chip select, we:Write/Read Enable, oe: Output Enable
	parameter DATA_WIDTH = 8 ;
	parameter ADDR_WIDTH = 8 ;
	parameter RAM_DEPTH = 1 << ADDR_WIDTH;
	input [ADDR_WIDTH-1:0] address ;
	input clk, cs, we, oe ;
	input [DATA_WIDTH-1:0] data_in ;
	output [DATA_WIDTH-1:0] data_out ;
	reg [DATA_WIDTH-1:0] data_o = 0 ;
	reg [DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
	//Tri-state buffer, Output: When we = 0 (read), oe = 1, cs = 1 
	assign data_out = (cs && oe && !we) ? data_o : 8'b0;
 
	// CONTINUED
	// Memory Write : when we = 1, cs = 1
	always @ (posedge clk)
	begin
		if ( cs && we )
			mem[address] <= data_in;
		// Memory Read: when we = 0, oe = 1, cs = 1
		else if (cs && !we && oe)
			data_o <= mem[address];
		end
endmodule
