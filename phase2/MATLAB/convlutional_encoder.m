function [coded_frame] = convlutional_encoder(frame,rate)
    
rate_arr = [ '1101'; '1111'; '0101'; '0111'; '1001'; '1011'; '0001' ; '0011'];
%coding_rate_arr = [0.5 0.75 0.5 0.75 0.5 0.75 0.66 0.75];
coding_rate_arr = [0.5 0.5 0.5 0.5 0.5 0.5 0.5 0.5];
for i = 1:8
    if(rate_arr(i, :) == rate)
        R = coding_rate_arr(i);
    end
end


data_frame = frame(25: end);
if(R == 0.66)
    coded_frame_len = 48 + length(data_frame)*3/2;
else
    coded_frame_len = 48 + length(data_frame)/R;
end
coded_frame(1:coded_frame_len) = '0';
state = '000000';

% Encoding Signal Field
for i = 1:2:48
    coded_frame(i) = num2str(mod(str2double(frame((i+1)/2)) + ... 
                     str2double(state(2)) + str2double(state(3)) + ...
                     str2double(state(5)) + str2double(state(6)), 2));
    coded_frame(i+1) = num2str(mod(str2double(frame((i+1)/2)) + ... 
                     str2double(state(1)) + str2double(state(2)) + ...
                     str2double(state(3)) + str2double(state(6)), 2));
    state(2:6) = state(1:5);
    state(1) = frame((i+1)/2);
end


j = 49;
s = 0;
for i = 1:length(data_frame)
    switch R 
        case 0.5
            coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                     str2double(state(2)) + str2double(state(3)) + ...
                     str2double(state(5)) + str2double(state(6)), 2));
            coded_frame(j+1) = num2str(mod(str2double(data_frame(i)) + ... 
                     str2double(state(1)) + str2double(state(2)) + ...
                     str2double(state(3)) + str2double(state(6)), 2));
            j = j+2;
        case 0.75
            if(s == 0)
                coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(2)) + str2double(state(3)) + ...
                         str2double(state(5)) + str2double(state(6)), 2));
                coded_frame(j+1) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(1)) + str2double(state(2)) + ...
                         str2double(state(3)) + str2double(state(6)), 2));
                j = j+2;
            elseif(s == 1)
                coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(2)) + str2double(state(3)) + ...
                         str2double(state(5)) + str2double(state(6)), 2));
                j = j+1;
            else
                coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(1)) + str2double(state(2)) + ...
                         str2double(state(3)) + str2double(state(6)), 2));
                j = j+1;
            end
            s = mod(s+1, 3);
        case 0.66
            if(s == 0)
                coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(2)) + str2double(state(3)) + ...
                         str2double(state(5)) + str2double(state(6)), 2));
                coded_frame(j+1) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(1)) + str2double(state(2)) + ...
                         str2double(state(3)) + str2double(state(6)), 2));
                j = j+2;
            else
                coded_frame(j) = num2str(mod(str2double(data_frame(i)) + ... 
                         str2double(state(2)) + str2double(state(3)) + ...
                         str2double(state(5)) + str2double(state(6)), 2));
                j = j+1;
            end
            s = mod(s+1,2);
    end
    state(2:6) = state(1:5);
    state(1) = data_frame(i);
end
    
end

