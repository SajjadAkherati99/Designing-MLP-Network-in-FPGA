`timescale 1ns/1ns
module multiplier1_tb();
parameter no_of_tests = 100; // testing the module 100 times
//------------------generating a 100MHz clock signal
reg clk = 1'b1;
always
clk = #5 !clk;
//-----------------------------------------------------
//-------------------------------------- reg declaration
reg start;
reg [ 7:0] A, B, C, D;
reg [15:0] expected_product;
//----------------------------------------------------------
integer i, j, err = 0;
initial begin
start = 0;
// The following line means wait for a clock cycle (3 cycles
delay)
@(posedge clk);
@(posedge clk);
@(posedge clk);
#1;
//repeat the test no_of_tests times with different random
numbers
for(i=0; i<no_of_tests; i=i+1) begin
A = $random();
B = $random();
expected_product = A * B;
C = A;
D = B;
//generating start signal
start = 1;
@(posedge clk);
#1;
start = 0;
//wait until multiplication completes
for(j=0; j<=8; j=j+1)
@(posedge clk);
$write ("%x (%0d) x %x (%0d) = %x (%0d) ", {C}, {C}, {D},
{D}, uut.Product, uut.Product);
8
if (expected_product == uut.Product)
$display(", OK");
else
$display (", ERROR: expected %x, got %x",
expected_product, uut.Product);
end
$stop;
end
multiplier1 uut ( // unit to be tested is instantiated
.clk(clk),
.start(start),
.A(A),
.B(B),
.Product(),
.ready()
);
endmodule

