%% Load Encoded Frame
clc; 
clear;

fileID = fopen('encoded_MATLAB.txt','r');
frame = fscanf(fileID, '%s');
fclose(fileID);

rate = '1001'; % Know from the previous phase;

%% Interleaving

interleaved_frame = data_interleaver(frame, rate);

fileID = fopen('interleaved_MATLAB.txt','w');
fprintf(fileID,'%s', interleaved_frame(1));
for i = 2:length(interleaved_frame)
    fprintf(fileID,' %s', interleaved_frame(i));
end
fclose(fileID);


%% Deinterleaving
deinterleaved_frame = data_deinterleaver(interleaved_frame(37:end), rate);

fileID = fopen('deinterleaved_MATLAB.txt','w');
fprintf(fileID,'%s', deinterleaved_frame(1));
for i = 2:length(deinterleaved_frame)
    fprintf(fileID,' %s', deinterleaved_frame(i));
end
fclose(fileID);

%% Compare the Results
clc

sprintf('MATLAB Code: diffrence between the main frame and interleaved frame is %d', ...
    sum(frame ~= deinterleaved_frame))

fileID = fopen('interleaved_verilog.txt','r');
interleaved_verilog = fscanf(fileID, '%s');
fclose(fileID);
frame_len = length(frame);
interleaved_verilog = interleaved_verilog(1:36 + frame_len);

sprintf('Interleaver: diffrence between the MATLAB and verilog module is %d', ...
    sum(interleaved_verilog ~= interleaved_frame))

fileID = fopen('deinterleaved_verilog.txt','r');
deinterleaved_verilog = fscanf(fileID, '%s');
fclose(fileID);
frame_len = length(frame);
deinterleaved_verilog = deinterleaved_verilog(1: frame_len);

sprintf('Interleaver: diffrence between the MATLAB and verilog module is %d', ...
    sum(deinterleaved_verilog ~= deinterleaved_frame))





