function [o] = cordic(in)
format long;
x=1;
y=0;
z=in;



lt=[1.71484375 1.3515625 0.97265625 0.546875 0.25390625 0.125 0.0625 0.03125];

for i=-2:5
    if (z<0) 
        d=-1; 
    else
        d=1;
    end
    if (i<=0)
        xnew = x + y*d - d*rond(y,2-i);
        ynew = y + x*d - d*rond(x,2-i);
        znew = z - d*lt(i+3);
        x=xnew;
        y=ynew;
        z=znew;
    else    
        xnew = x + d*rond(y,i);
        ynew = y + d*rond(x,i);
        znew = z - d*lt(i+3);
        x=xnew;
        y=ynew;
        z=znew;
    end
end


z=0;
for i=1:7
    if (y<0)
        d=1;
    else
        d=-1;
    end
    y= y + d*rond(x,i);
    z= z - rond(d,i);
end

out0 =z;
out=0;
if (z<0) sign=1; else sign=0; end
z= abs(z);
o(1)= 0;
for i=2:8
    z=z*2;
    if (z>=1) plus=1;    else plus=0; end
    o(i)= plus;
    z= z-plus;
end
if (sign ==1)
    i=8;
    test=0;
    while(i>=2)
        if (test==1) o(i)= 1-o(i); end
        if(o(i)==0 && test==0) test=0;
        else    test=1;
        end
        i=i-1;
    end
    o(1)=1;
end
end



function [o] = rond(in, n)
x= abs(in);
x = floor ( x*256);
if (in>=0)
    str = dec2bin(x,10);
    strnew ='0000000000';
    strnew(n+1:10)=str(1:10-n);
    x = bin2dec(strnew);
    x = x/256;
else
    x = 1024-x;
    str = dec2bin(x,10);
    strnew ='1111111111';
    strnew(n+1:10)=str(1:10-n);
    x = bin2dec(strnew);
    x = 1024 - x;
    x = -x/256;    
end
o=x;
end