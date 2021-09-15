module test(A, B , clk, sclr, bypass, ce,   out   );

input [7:0]A,B;
output [15:0] out;
input clk, sclr, bypass, ce;


mulladd ut (
  .clk(clk), // input clk
  .ce(ce), // input ce
  .sclr(sclr), // input sclr
  .bypass(bypass), // input bypass
  .a(A), // input [7 : 0] a
  .b(B), // input [7 : 0] b
  .s(out) // output [15 : 0] s
);

endmodule
