function [deinterleaved_frame] = data_deinterleaver(frame,rate)

frame_len = length(frame);

deinterleaved_frame(1:frame_len) = '0';

for i = 0:47
	k = 16*i - 47*floor(i/3);
	deinterleaved_frame(k+1) = frame(i+1); 
end

s = 1;
N_CBPS = 48;
N_CBPS_16 = 3;
if (rate == "1001")
	s = 2;
	N_CBPS = 192;
	N_CBPS_16 = 12;
end
if (rate == "0101")
	N_CBPS = 96;
	N_CBPS_16 = 6;
end

for ind = 49:N_CBPS:frame_len
	for j = 0:(N_CBPS-1)
		i = s*floor(j/s) + mod((j + floor(j/N_CBPS_16)), s);
		k = 16*i - (N_CBPS-1)*floor(i/N_CBPS_16);
		deinterleaved_frame(ind+k) = frame(ind+j);
	end
end
end
