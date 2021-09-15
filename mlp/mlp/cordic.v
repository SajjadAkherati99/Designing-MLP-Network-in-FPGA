module cordic( in, reset, clk, tanh);

parameter n=7;
input signed[n:-8]in;
output signed[7:0]tanh;
input clk, reset;
// this are used for sinh & cosh;
reg signed[7:-8]x=0;
reg signed[7:-8]y=0;
reg signed[7:-8]xnew=0;
reg signed[7:-8]ynew=0;
reg signed[n:-8]z=0;
reg signed[1:-8]zt=0;


reg [3:0]y_now, y_next;
parameter a=4'b0000, b=4'b0001, c= 4'b0011, d=4'b00010,
				e=4'b0110, f=4'b0111, g= 4'b0101, h=4'b0100,
				i=4'b1100, j=4'b1101, k= 4'b1111, l=4'b1110,
				m=4'b1010, q=4'b1011, o= 4'b1001, p=4'b1000;

always @(y_now)
begin
	case (y_now)
		a: begin
				y_next = b;
				x = $signed(16'b0000000100000000);
				y = $signed(0);
				z[n:-8] = in;
				zt = $signed(0);
			end
		b:begin
			y_next= c;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - y + {{4{y[7]}}, {y[7:-4]}}; 
				ynew = y - x + {{4{x[7]}}, {x[7:-4]}};
				z = z + 18'b0110110111;
				x = xnew;
				y = ynew; 
			end
			else begin
				xnew = x + y - {{4{y[7]}}, {y[7:-4]}}; 
				ynew = y + x - {{4{x[7]}}, {x[7:-4]}};
				z = z - 18'b0110110111;
				x = xnew;
				y = ynew;
			end
			end
		c:begin
			y_next= d;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - y + {{3{y[7]}}, {y[7:-5]}}; 
				ynew = y - x + {{3{x[7]}}, {x[7:-5]}};
				z = z + 18'b0101011010;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + y - {{3{y[7]}}, {y[7:-5]}}; 
				ynew = y + x - {{3{x[7]}}, {x[7:-5]}};
				z = z - 18'b0101011010;	
				x = xnew;
				y = ynew;				
			end
			end
		d:begin
			y_next= e;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - y + {{2{y[7]}}, {y[7:-6]}}; 
				ynew = y - x + {{2{x[7]}}, {x[7:-6]}};
				z = z + 18'b0011111001;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + y - {{2{y[7]}}, {y[7:-6]}}; 
				ynew = y + x - {{2{x[7]}}, {x[7:-6]}};
				z = z - 18'b0011111001;
				x = xnew;
				y = ynew;				
			end
			end			
		e:begin
			y_next= f;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - {{1{y[7]}}, {y[7:-7]}}; 
				ynew = y - {{1{x[7]}}, {x[7:-7]}};
				z = z + 18'b0010001100;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + {{1{y[7]}}, {y[7:-7]}}; 
				ynew = y + {{1{x[7]}}, {x[7:-7]}}; 
				z = z - 18'b0010001100;
				x = xnew;
				y = ynew;				
			end
			end
		f:begin
			y_next= g;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - {{2{y[7]}}, {y[7:-6]}};
				ynew = y - {{2{x[7]}}, {x[7:-6]}};
				z = z + 18'b0001000001;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + {{2{y[7]}}, {y[7:-6]}};
				ynew = y + {{2{x[7]}}, {x[7:-6]}};
				z = z - 18'b0001000001;
				x = xnew;
				y = ynew;				
			end
			end
		g:begin
			y_next= h;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - {{3{y[7]}}, {y[7:-5]}};
				ynew = y - {{3{x[7]}}, {x[7:-5]}};
				z = z + 18'b0000100000;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + {{3{y[7]}}, {y[7:-5]}}; 
				ynew = y + {{3{x[7]}}, {x[7:-5]}};
				z = z - 18'b0000100000;
				x = xnew;
				y = ynew;				
			end
			end
		h:begin
			y_next= i;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - {{4{y[7]}}, {y[7:-4]}}; 
				ynew = y - {{4{x[7]}}, {x[7:-4]}};
				z = z + 18'b0000010000;
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + {{4{y[7]}}, {y[7:-4]}};
				ynew = y + {{4{x[7]}}, {x[7:-4]}};
				z = z - 18'b0000010000;
				x = xnew;
				y = ynew;				
			end
			end
		i:begin
			y_next= j;
			if ( z[n]==1 && z[n-1:-8]!=0 )
			begin
				xnew = x - {{5{y[7]}}, {y[7:-3]}}; 
				ynew = y - {{5{x[7]}}, {x[7:-3]}};
				x = xnew;
				y = ynew;
			end
			else begin
				xnew = x + {{5{y[7]}}, {y[7:-3]}};  
				ynew = y + {{5{x[7]}}, {x[7:-3]}};
				zt = 0;
				x = xnew;
				y = ynew;				
			end
			end
		j:begin
			y_next= k;
			if ( y[7]==1 && y[6:-8]!=0 )
			begin
				y = y + {{1{x[7]}}, {x[7:-7]}};
				zt = zt + $signed(10'b1110000000);
			end
			else begin 
				y = y - {{1{x[7]}}, {x[7:-7]}};
				zt = zt + $signed(10'b0010000000);					
			end
			end		
		k:begin
			y_next= l;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{2{x[7]}}, {x[7:-6]}};
				zt = zt + $signed(10'b1111000000);
			end
			else begin 
				y = y - {{2{x[7]}}, {x[7:-6]}};
				zt = zt + $signed(10'b0001000000);					
			end
			end		
		l:begin
			y_next= m;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{3{x[7]}}, {x[7:-5]}};
				zt = zt + $signed(10'b1111100000);
			end
			else begin 
				y = y - {{3{x[7]}}, {x[7:-5]}};
				zt = zt + $signed(10'b0000100000);				
			end
			end
		m:begin
			y_next= q;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{4{x[7]}}, {x[7:-4]}};
				zt = zt + $signed(10'b1111110000);
			end
			else begin 
				y = y - {{4{x[7]}}, {x[7:-4]}};
				zt = zt + $signed(10'b0000010000);					
			end
			end
		q:begin
			y_next= o;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{5{x[7]}}, {x[7:-3]}};
				zt = zt + $signed(10'b1111111000);
			end
			else begin 
				y = y - {{5{x[7]}}, {x[7:-3]}};
				zt = zt + $signed(10'b0000001000);					
			end
			end
		o:begin
			y_next= p;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{6{x[7]}}, {x[7:-2]}};
				zt = zt + $signed(10'b1111111100);
			end
			else begin 
				y = y - {{6{x[7]}}, {x[7:-2]}};
				zt = zt + $signed(10'b0000000100);					
			end
			end			
		p:begin
			y_next= a;
			if (y[7]==1 && y[6:-8]!=0)
			begin
				y = y + {{7{x[7]}}, {x[7:-1]}};
				zt = zt + $signed(10'b1111111110);
			end
			else begin 
				y = y - {{7{x[7]}}, {x[7:-1]}};
				zt = zt + $signed(10'b0000000010);					
			end
			end
		default: y_next=a; 	
		endcase
end

always @(posedge clk) 
	if(!reset) y_now<=a;
	else	y_now<= y_next;	
assign tanh= (y_now==p)? zt[0:-7]:tanh;

endmodule



