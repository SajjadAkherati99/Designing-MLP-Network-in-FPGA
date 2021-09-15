%% Build Frame
clc; 
clear;

% Initializations:

%         6MHz    9MHz   12MHz   18MHz   24MHz   36MHz   48MHz    54MHz
% rate = [ '1101'; '1111'; '0101'; '0111'; '1001'; '1011'; '0001' ; '0011'];
% coding_rate_arr = [0.5 0.75 0.5 0.75 0.5 0.75 0.66 0.75];
% N_BPSC_arr = [1 1 2 2 4 4 6 6];
% N_CBPS_arr = [48 48 96 96 192 192 288 288];
% N_DBPS_arr = [24 36 48 72 96 144 192 216];
% 
% 
% % Signal Field
% must_implement = [1, 3, 5];
% kind = must_implement(randi(3));
% signal(1:4) = rate(kind, :);
% 
% signal(5)= '0';
% data_bytes = randi(4095);
% signal(17:-1:6) = dec2bin(data_bytes,12);
% p = 0;
% for i=1:17
%     if (signal(i) == '1')
%         p = p+1;
%     end
% end
% signal(18) = dec2bin(mod(p,2));
% signal (19:24) = '000000';
%     
% 
% 
% service = '0000000000000000';
% data = '';
% for i = 1:data_bytes
%     data = [data, dec2bin((randi(256))-1, 8)];
% end
% tail = '000000';
% 
% N_DBPS = N_DBPS_arr(kind);
% N_SYM = ceil((16+8*data_bytes+6)/N_DBPS);
% N_DATA = N_SYM*N_DBPS;
% N_PAD = N_DATA-(16+8*data_bytes+6);
% pad = dec2bin(0, N_PAD);
% 
% frame = [signal, service, data, tail, pad];
% 
% fileID = fopen('frame.txt','wt');
% fprintf(fileID,'%s', frame(1));
% for i = 2:length(frame)
%     fprintf(fileID,' %s', frame(i));
% end
% fclose(fileID);
% 
% fileID = fopen('pad_length.txt','w');
% fprintf(fileID,'%d', N_PAD+6);
% fclose(fileID);


% load bulded frames
fileID = fopen('frame.txt','r');
frame = fscanf(fileID, '%s');
fclose(fileID);

%% Scrambling
clc

initial_seed = '1011101';
scrambled_frame = scrambling(frame, initial_seed);

fileID = fopen('scrambled_MATLAB.txt','w');
fprintf(fileID,'%s', scrambled_frame(1));
for i = 2:length(scrambled_frame)
    fprintf(fileID,' %s', scrambled_frame(i));
end
fclose(fileID);

%% Descrambling
clc

descrambled_frame = descrambling(scrambled_frame);
fileID = fopen('descrambled_MATLAB.txt','w');
fprintf(fileID,'%s', descrambled_frame(1));
for i = 2:length(scrambled_frame)
    fprintf(fileID,' %s', descrambled_frame(i));
end
fclose(fileID);

clear fileID coding_rate_arr data data_bytes i kind N_BPSC_arr N_CBPS_arr
clear N_DATA N_DBPS N_DBPS_arr N_PAD N_SYM p pad rate service signal tail


%% Check Outputs from Verilog and MATLAB

% check MATLAB Scrambler and Descrambler:
error_num  = length(find(frame ~= descrambled_frame));
if (error_num == 0)
    sprintf("MATLAB code is ok.")
else
    sprintf("Something is wrong.")
end

% check the MATLAB Scrambler with Verilog Scrambler:
fileID = fopen('scrambled_verilog.txt','r');
scrambled_verilog = fscanf(fileID, '%s');
scrambled_verilog = scrambled_verilog(1:length(frame));
fclose(fileID);
error_num  = length(find(scrambled_verilog ~= scrambled_frame));
if (error_num == 0)
    sprintf("Scrambling: Verilog code is matched with MATLAB code.")
else
    sprintf("Scrambling: Something is wrong.")
end


% check the MATLAB descrambler with verilog descrambler
fileID = fopen('descrambled_verilog.txt','r');
descrambled_verilog = fscanf(fileID, '%s');
descrambled_verilog = descrambled_verilog(1:length(frame));
fclose(fileID);
error_num  = length(find(descrambled_verilog ~= descrambled_frame));
if (error_num == 0)
    sprintf("deScrambling: Verilog code is matched with MATLAB code.")
else
    sprintf("deScrambling: Something is wrong.")
end




