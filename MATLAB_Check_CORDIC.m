%%  please notice to the following explanations:
% please run the verilog testbench before running this MATLAB .m file and
% copy the generated text file named
% "Verilog_FixedPoint_for_test_in_MATLAB" in the MATLAB files directory.
% this is the result of verilog to compare with matlab function:

%%
% 1- initial atanh([(1-2^(i-2) i<=0)  matrix for CORDIC_tanh function 
%                2^(-i)     i>0])
% 2- write the in text file (fixed_point_atanh.txt)
% 3- the resolution is 13 bit in fraction part

clc
clear
format long;
n = 13;
tanh_2_power__i = [ num2fixpt(atanh(4095/4096), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(2047/2048), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1023/1024), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(511/512), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(255/256), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(127/128), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(63/64), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(31/32), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(15/16), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(7/8), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(3/4), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/2), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/4), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/8), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/16), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/32), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/64), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/128), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/256), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/512), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/1024), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/2048), sfix(n+4), 2^-n) ...
                    num2fixpt(atanh(1/4096), sfix(n+4), 2^-n) ];

fileID = fopen('fixed_point_atanh.txt','wt');
for i = 1:23
    if (i <= 11)
        Alpha = 1-2^(i-13);
    else
        Alpha = 2^(11-i);
    end
    fprintf(fileID,'atanh(%.13f) = %.14f;    decimal value = %d\n', ...
        Alpha, tanh_2_power__i(i), tanh_2_power__i(i)*2^13);
end
fclose(fileID);
    
%%
%1- Calculate the tanh(Alpha) for Alpha in range [-4,4) with the minimom 
%   distance of 2^(-12) between each Angle;

%2- the result has been calculated in floating point format of implemented
%   CORDIC_tanh function;

%3- the tanh value of tanh MATLAB function and my CORDIC function in
%   floating point mode has been saved in a file named 
%   (matlab_cordic_floating_point.txt);

%4- the values that calculated by CORDIC function has been saved in
%   "tanh_Alpha_FloatingPoint" array to compare the results at the end;

fileID = fopen('matlab_cordic_floating_point.txt','wt');
num = 16384;
tanh_Alpha_FloatingPoint = zeros(1,2*num);

for i = -num:num-1
    Alpha = i/4096;
    tanh_Alpha = tanh(Alpha); 
    tanh_Alpha_FloatingPoint(i+num+1) = ...
            CORDIC_tanh(Alpha, tanh_2_power__i, "floating_point");
    fprintf(fileID,'tanh(%.12f) = %.20f    CORDIC_tanh(%.12f) = %.20f\n', ...
            Alpha, tanh_Alpha, Alpha, tanh_Alpha_FloatingPoint(i+num+1));
end
fclose(fileID);

%%
%1- Calculate the tanh(Alpha) for Alpha in range [-4,4) with the minimom 
%   distance of 2^(-12) between each Angle;

%2- the result has been calculated in fixed point format of implemented
%   CORDIC_tanh function;

%3- the tanh value of tanh MATLAB function and my CORDIC function in
%   fixed point mode has been saved in a file named 
%   (matlab_cordic_fixed_point.txt);

%4- the values that calculated by CORDIC function has been saved in
%   "tanh_Alpha_FixedPoint" array to compare the results at the end;

fileID = fopen('matlab_cordic_fixed_point.txt','wt');
tanh_Alpha_FixedPoint = zeros(1,2*num);

for i = -num:num-1
    Alpha = i/4096;
    tanh_Alpha = tanh(Alpha); 
    tanh_Alpha_FixedPoint(i+num+1) = ...
            CORDIC_tanh(Alpha, tanh_2_power__i, "fixed_point");
    fprintf(fileID,'tanh(%.12f) = %.20f    CORDIC_tanh(%.12f) = %.20f\n', ...
            Alpha, tanh_Alpha, Alpha, tanh_Alpha_FixedPoint(i+num+1));
end
fclose(fileID);

%% 
% 1- compare the result of MATLAB tanh with CORDIC_tanh function in
%    floating point mode

% 2- compare the result of MATLAB tanh with CORDIC_tanh function in fixed
%    point mode

% 3- compare the result of implemented design testbench with CORDIC_tanh
%    function in fixed point mode to check that they are all the same.

fileID = fopen('Verilog_FixedPoint_for_test_in_MATLAB.txt','r');
verilog_CORDIC = fscanf(fileID, "%f");
fclose(fileID);

error_MATLAB_with_CORDIC_FloatingPoint = zeros(1,2*num);
error_MATLAB_with_CORDIC_FixedPoint = zeros(1,2*num);
error_Verilog_with_CORDIC_FixedPoint = zeros(1,2*num);

for i = -num:num-1
    Alpha = i/4096;
    error_MATLAB_with_CORDIC_FloatingPoint(i+num+1) = ...
            abs(tanh_Alpha_FloatingPoint(i+num+1) - tanh(Alpha));
        
    error_MATLAB_with_CORDIC_FixedPoint(i+num+1) = ...
            abs(tanh_Alpha_FixedPoint(i+num+1) - tanh(Alpha));
        
    error_Verilog_with_CORDIC_FixedPoint(i+num+1) = ...
            round(abs(verilog_CORDIC(i+num+1) - tanh_Alpha_FixedPoint(i+num+1)),3);
end

angle_Range = -num:num-1;
angle_Range = angle_Range/4096;

subplot(3,1,1);
stem(angle_Range, error_MATLAB_with_CORDIC_FloatingPoint, 'g');
xlabel("Angle(Rad)");
ylabel("Error");
title("Error of 'tanh' MATLAB with CORDIC-tanh in floating-point mode");

subplot(3,1,2); 
stem(angle_Range, error_MATLAB_with_CORDIC_FixedPoint, 'r');
xlabel("Angle(Rad)");
ylabel("Error");
title("Error of 'tanh' MATLAB with CORDIC-tanh in fixed-point mode");

subplot(3,1,3); 
plot(angle_Range, error_Verilog_with_CORDIC_FixedPoint, 'b');
xlabel("Angle(Rad)");
ylabel("Error");
title("Error of verilog implemented design with MATLAB CORDIC-tanh");


