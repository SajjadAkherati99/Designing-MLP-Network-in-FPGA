%% Load Scrambled Frame
clc; 
clear;

fileID = fopen('scrambled_MATLAB.txt','r');
frame = fscanf(fileID, '%s');
fclose(fileID);

rate = frame(1:4);

%% Coding the Frame

coded_frame = convlutional_encoder(frame, rate);

fileID = fopen('encoded_MATLAB.txt','w');
fprintf(fileID,'%s', coded_frame(1));
for i = 2:length(coded_frame)
    fprintf(fileID,' %s', coded_frame(i));
end
fclose(fileID);

%% Error on encoded data

%l1 = length(coded_frame);
clc
len = length(coded_frame);
l1 = 960;
error_rate = 0.001;
l2 = floor(error_rate*len);
ind_err = randperm(len, l2);
coded_frame_error = coded_frame;
for i = 1:length(ind_err)
    coded_frame_error(ind_err(i)) = num2str(1 - str2double(coded_frame_error(ind_err(i))));
end
sprintf('occured %d error on the coded data in serial link', l2)

%% Write the file with error

fileID = fopen('encoded_MATLAB.txt','w');
fprintf(fileID,'%s', coded_frame_error(1));
for i = 2:length(coded_frame_error)
    fprintf(fileID,' %s', coded_frame_error(i));
end
fclose(fileID);

%% Decoding the frame with no error

[error_num, decoded_frame] = viterbi_decoder(coded_frame(1:l1));
fileID = fopen('decoded_noError_MATLAB.txt','w');
fprintf(fileID,'%s', decoded_frame(1));
for i = 2:length(decoded_frame)
    fprintf(fileID,' %s', decoded_frame(i));
end
fclose(fileID);

len = length(decoded_frame);
sprintf('data was decoded with %d number of diffrences with main data ', ...
        sum(decoded_frame ~= frame(1:len)))
sprintf('founded %d number of errors', error_num)

%% Decoding the frame with error

[error_num, decoded_frame_error] = viterbi_decoder(coded_frame_error(1:l1));
fileID = fopen('decoded_Error_MATLAB.txt','w');
fprintf(fileID,'%s', decoded_frame_error(1));
for i = 2:length(decoded_frame_error)
    fprintf(fileID,' %s', decoded_frame_error(i));
end
fclose(fileID);

len = length(decoded_frame_error);
sprintf('data was decoded with %d number of diffrences with main data', ...
        sum(decoded_frame_error ~= frame(1:len)))

sprintf('founded %d number of errors', error_num)
    

%% Compare Results

fileID = fopen('encoded_verilog.txt','r');
encoded_verilog = fscanf(fileID, '%s');
fclose(fileID);

min_len = min(length(coded_frame), length(encoded_verilog)); 

sprintf('Encoder: diffrence between the verilog code and matlab code is %d', ...
    sum(coded_frame(1:min_len) ~= encoded_verilog(1:min_len)))

fileID = fopen('decoded_verilog.txt','r');
decoded_verilog = fscanf(fileID, '%s');
fclose(fileID);

decoded_verilog = decoded_verilog(76:end);

min_len = min(length(frame), length(decoded_verilog)); 

sprintf('Decoder: diffrence between the verilog code and matlab code is %d', ...
    sum(frame(1:min_len) ~= decoded_verilog(1:min_len)))


%% Vrilog .txt files needed
% clc
% A0(1:64) = '0';
% B0(1:64) = '0';
% A1(1:64) = '0';
% B1(1:64) = '0';
% 
% for i = 1:64
%     s0 = mod(2*(i-1), 64);
% 	s1 = s0 + 1;
%     in_p = floor((i-1)/32);
% 	A0(i) = num2str(mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + ...
%             (bitand(s0,8)>0) + (bitand(s0,16)>0) + in_p, 2));
%     B0(i) = num2str(mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + ...
%             (bitand(s0,16)>0) + (bitand(s0,32)>0) + in_p, 2));
%     A1(i) = num2str(mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + ...
%             (bitand(s1,8)>0) + (bitand(s1,16)>0) + in_p, 2));
%     B1(i) = num2str(mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + ...
%             (bitand(s1,16)>0) + (bitand(s1,32)>0) + in_p, 2));
% end
% 
% fileID = fopen('A0.txt','w');
% fprintf(fileID,'%s', A0);
% fclose(fileID);
% 
% fileID = fopen('A1.txt','w');
% fprintf(fileID,'%s', A1);
% fclose(fileID);
% 
% fileID = fopen('B0.txt','w');
% fprintf(fileID,'%s', B0);
% fclose(fileID);
% 
% fileID = fopen('B1.txt','w');
% fprintf(fileID,'%s', B1);
% fclose(fileID);


