clc; 
clear all;
format long;

fileID = fopen('test_matlab_cordic.txt','w');

for i=1:255
    c = cordic(i/256);
    co = 0;
    for j=1:8
        co = 10*co + c(j);
    end
    coc = num2str(co);
    c = bin2dec(coc);
    w = dec2bin(c,16);
    fprintf(fileID,'%s \n',w);
end

for i=256:-1:1
    c = cordic(-i/256);
    co = 0;
    for j=1:8
        co = 10*co + c(j);
    end
    coc = num2str(co);
    c = bin2dec(coc);
    w = dec2bin(c,16);
    fprintf(fileID,'%s \n',w);
end

fclose(fileID);

fileID = fopen('Result.txt','r');
A = fscanf(fileID,'%d');

fclose(fileID);

fileID = fopen('test_matlab_cordic.txt','r');
B = fscanf(fileID,'%d');
fclose(fileID);

A= A(2:512);


A = bin2dec(num2str(A));
B = bin2dec(num2str(B));
 

test=0;
C=zeros(511,1);
c=0;
for i=1:511
    if (((abs(A(i)-B(i)))) > 0)
        C(i) = 1;
        test=1;
        c=c+1;
        
    end
end
if (test==0)
    sprintf(' ok, all data in both matlab fixed_point and verilag fixed_point are  equal with ate least deferatation of 0.0625')
else 
    sprintf(' %d different case founded in your VHDL hardware and matlab_code, the ones in arry C, showes the errors', c)
end

