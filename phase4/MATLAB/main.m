%% Build Frame
clc; 
clear;

% Initializations:

%         6MHz    9MHz   12MHz   18MHz   24MHz   36MHz   48MHz    54MHz
rate = [ '1101'; '1111'; '0101'; '0111'; '1001'; '1011'; '0001' ; '0011'];
coding_rate_arr = [0.5 0.75 0.5 0.75 0.5 0.75 0.66 0.75];
N_BPSC_arr = [1 1 2 2 4 4 6 6];
N_CBPS_arr = [48 48 96 96 192 192 288 288];
N_DBPS_arr = [24 36 48 72 96 144 192 216];


% Signal Field
must_implement = [1, 3, 5];
kind = must_implement(randi(3));
signal(1:4) = rate(kind, :);

signal(5)= '0';
% data_bytes = randi(4095); % length can be up to 4095 byte of data
data_bytes = randi(400) + 100;    % [100, 500] byte of data to run MATLAB 
                                  % Code fast as it is a serial code!!! 
signal(17:-1:6) = dec2bin(data_bytes,12);
p = 0;
for i=1:17
    if (signal(i) == '1')
        p = p+1;
    end
end
signal(18) = dec2bin(mod(p,2));
signal (19:24) = '000000';
    


service = '0000000000000000';
data = '';
for i = 1:data_bytes
    data = [data, dec2bin((randi(256))-1, 8)];
end
tail = '000000';

N_DBPS = N_DBPS_arr(kind);
N_SYM = ceil((16+8*data_bytes+6)/N_DBPS);
N_DATA = N_SYM*N_DBPS;
N_PAD = N_DATA-(16+8*data_bytes+6);
pad = dec2bin(0, N_PAD);

frame = [signal, service, data, tail, pad];

fileID = fopen('frame.txt','wt');
fprintf(fileID,'%s', frame(1));
for i = 2:length(frame)
    fprintf(fileID,' %s', frame(i));
end
fclose(fileID);

fileID = fopen('pad_length.txt','w');
fprintf(fileID,'%d', N_PAD+6);
fclose(fileID);


% load bulded frames
% fileID = fopen('frame.txt','r');
% frame = fscanf(fileID, '%s');
% fclose(fileID);

%% Scrambling:
initial_seed = '1011101';
scrambled_frame = scrambling(frame, initial_seed);


%% Convlutiona Coding:
coded_frame = convlutional_encoder(scrambled_frame, signal(1:4));


%% Data Interleaving:
frame_interleaved = data_interleaver(coded_frame, signal(1:4));

fileID = fopen('transmitted_frame_MATLAB_no_error.txt','wt');
fprintf(fileID,'%s', frame_interleaved(1));
for i = 2:length(frame_interleaved)
    fprintf(fileID,' %s', frame_interleaved(i));
end
fclose(fileID);

%% Add some Error on the Transmitted Frame:
clc

transmitted_MATLAB = frame_interleaved;
received_MATLAB = transmitted_MATLAB;

frame_len = length(received_MATLAB)-36;
error_rate = 0.003;
l2 = floor(error_rate*frame_len);
ind_err = 36+randperm(frame_len, l2);
for i = 1:length(ind_err)
    received_MATLAB(ind_err(i)) = num2str(1 - str2double(received_MATLAB(ind_err(i))));
end
sprintf('occured %d error on the coded data in serial link', l2)

fileID = fopen('transmitted_frame_MATLAB.txt','wt');
fprintf(fileID,'%s', received_MATLAB(1));
for i = 2:length(received_MATLAB)
    fprintf(fileID,' %s', received_MATLAB(i));
end
fclose(fileID);


%% Deinterleaving on transmitted frame in the serial link:
received_frame = received_MATLAB;
coded_received = data_deinterleaver(received_frame(37:end), signal(1:4));


%% Decoding the frame using viterbi decoder:

[error_num, scrambled_received] = viterbi_decoder(coded_received);


%% Descrambling:

frame_received = descrambling(scrambled_received);

fileID = fopen('received_frame_MATLAB.txt','wt');
fprintf(fileID,'%s', frame_received(1));
for i = 2:length(frame_received)
    fprintf(fileID,' %s', frame_received(i));
end
fclose(fileID);

%% Check the correctness of the Matlab Code:

sprintf('MATLAB Code: diffrence between transmitted frame and the received in MATALB is %d', ...
    sum(frame_received ~= frame))

%% Compare the Result OF Verilog and MATLAB in transmitter side:

fileID = fopen('transmitted_verilog.txt','r');
transmitted_verilog = fscanf(fileID, '%s');
fclose(fileID);

frame_len = min(length(transmitted_MATLAB), length(transmitted_verilog));

sprintf('TX Side: diffrence between the MATLAB code and verilog module is %d', ...
    sum(transmitted_verilog(1:frame_len) ~= transmitted_MATLAB(1:frame_len)))


%% Compare the Result of Received frame in MATLAB and Verilog:


received_MATLAB = frame;

fileID = fopen('received_verilog.txt','r');
received_verilog = fscanf(fileID, '%s');
fclose(fileID);

frame_len = min(length(received_MATLAB), length(received_verilog));

sprintf('RX Side: diffrence between the MATLAB code and verilog module is %d', ...
    sum(received_verilog(1:frame_len) ~= received_MATLAB(1:frame_len)))



