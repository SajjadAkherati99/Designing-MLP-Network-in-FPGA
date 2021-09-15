function [interleaved_frame] = data_interleaver(frame,rate)

frame_len = length(frame);

interleaved_frame(1:frame_len) = '0';

for k = 0:47
	i = 3*mod(k,16) + floor(k/16);
	interleaved_frame(i+1) = frame(k+1); 
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
	for k = 0:(N_CBPS-1)
		i = N_CBPS_16*mod(k,16) + floor(k/16);
		j = s*floor(i/s) + mod((i + N_CBPS - floor(16*i/N_CBPS)), s);
		interleaved_frame(ind+j) = frame(ind+k);
	end
end

interleaved_frame = ['010101010101010101010000000011111111', interleaved_frame];

end