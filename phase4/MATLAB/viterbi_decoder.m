function [error_mag, decoded_frame] = viterbi_decoder(coded_frame)
    
rate_arr = [ '1101'; '1111'; '0101'; '0111'; '1001'; '1011'; '0001' ; '0011'];
%coding_rate_arr = [0.5 0.75 0.5 0.75 0.5 0.75 0.66 0.75];
coding_rate_arr = [0.5 0.5 0.5 0.5 0.5 0.5 0.5 0.5];

signal_coded = coded_frame(1:48);
data_coded = coded_frame(49: end);

signal(1:24) = '0';

path_keeper = zeros(64, 24);
least_error_keeper = zeros(64,1) + inf;
least_error_keeper(1) = 0;
new_least_error_keeper = zeros(64,1);

for i = 1:2:48
	A = signal_coded(i);
	B = signal_coded(i+1);
    for s = 1:64
		in_p = floor((s-1)/32);
		s0 = mod(2*(s-1), 64);
		s1 = s0 + 1;
		A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
             + (bitand(s0,16)>0) + in_p, 2);
		B0 = mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + (bitand(s0,16)>0) ...
             + (bitand(s0,32)>0) + in_p, 2);
		A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
             + (bitand(s1,16)>0) + in_p, 2);
		B1 = mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + (bitand(s1,16)>0) ...
             + (bitand(s1,32)>0) + in_p, 2);
		e0 = (A0 ~= str2double(A)) + (B0 ~= str2double(B));
		e1 = (A1 ~= str2double(A)) + (B1 ~= str2double(B));
        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
			new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
			path_keeper(s, (i+1)/2) = s0+1;
        else
			new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
			path_keeper(s, (i+1)/2) = s1+1;
        end
    end
    least_error_keeper = new_least_error_keeper;
end

[err, previous] = mink(least_error_keeper, 1);

for i = 24:-1:1
    p_str = dec2bin(previous-1, 6);
    signal(i) = p_str(1);
    previous = path_keeper(previous, i);
end

rate = signal(1:4);
for i = 1:8
    if(rate_arr(i, :) == rate)
        R = coding_rate_arr(i);
    end
end

if(R == 0.66)
    data_len = length(data_coded)*2/3;
else
    data_len = length(data_coded)*R;
end
data(1:data_len) = '0';

if(R == 0.66)
	block_size = 36;
elseif(R == 0.75)
	block_size = 32;
else
	block_size = 48;
end


	
path_keeper = zeros(64, 24);
%least_error_keeper = zeros(64,1) + inf;
%least_error_keeper(1) = 0;
%new_least_error_keeper = zeros(64,1);
b = 1;

for i = 1:block_size:length(data_coded)
	block = data_coded(i:i+block_size-1);
	
    j = 1;
    state = 0;
    d = 1;
    
    switch(R)
        case 0.5
            while(j <= block_size)
                A = block(j);
                B = block(j+1);
                for s = 1:64
                    in_p = floor((s-1)/32);
                    s0 = mod(2*(s-1), 64);
                    s1 = s0 + 1;
                    A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
                         + (bitand(s0,16)>0) + in_p, 2);
                    B0 = mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + (bitand(s0,16)>0) ...
                         + (bitand(s0,32)>0) + in_p, 2);
                    A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
                         + (bitand(s1,16)>0) + in_p, 2);
                    B1 = mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + (bitand(s1,16)>0) ...
                         + (bitand(s1,32)>0) + in_p, 2);
                    e0 = (A0 ~= str2double(A)) + (B0 ~= str2double(B));
                    e1 = (A1 ~= str2double(A)) + (B1 ~= str2double(B));
                    if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                        new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                        path_keeper(s, d) = s0+1;
                    else
                        new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                        path_keeper(s, d) = s1+1;
                    end
                end
                least_error_keeper = new_least_error_keeper;
                j = j+2;
                d = d+1;
            end
        case 0.66
            while(j <= block_size)
                if(state == 0)
                    A = block(j);
                    B = block(j+1);
                    for s = 1:64
                        in_p = floor((s-1)/32);
                        s0 = mod(2*(s-1), 64);
                        s1 = s0 + 1;
                        A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
                             + (bitand(s0,16)>0) + in_p, 2);
                        B0 = mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + (bitand(s0,16)>0) ...
                             + (bitand(s0,32)>0) + in_p, 2);
                        A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
                             + (bitand(s1,16)>0) + in_p, 2);
                        B1 = mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + (bitand(s1,16)>0) ...
                             + (bitand(s1,32)>0) + in_p, 2);
                        e0 = (A0 ~= str2double(A)) + (B0 ~= str2double(B));
                        e1 = (A1 ~= str2double(A)) + (B1 ~= str2double(B));
                        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                            new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                            path_keeper(s, d) = s0+1;
                        else
                            new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                            path_keeper(s, d) = s1+1;
                        end
                    end
                    least_error_keeper = new_least_error_keeper;
                    j = j+2;
                else
                    A = block(j);
                    for s = 1:64
                        in_p = floor((s-1)/32);
                        s0 = mod(2*(s-1), 64);
                        s1 = s0 + 1;
                        A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
                             + (bitand(s0,16)>0) + in_p, 2);
                        A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
                             + (bitand(s1,16)>0) + in_p, 2);
                        e0 = (A0 ~= str2double(A));
                        e1 = (A1 ~= str2double(A));
                        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                            new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                            path_keeper(s, d) = s0+1;
                        else
                            new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                            path_keeper(s, d) = s1+1;
                        end
                    end
                    least_error_keeper = new_least_error_keeper;
                    j = j+1;
                end
                d = d+1;
                state = mod(state+1, 2);
            end
        case 0.75
            while(j <= block_size)
                if(state == 0)
                    A = block(j);
                    B = block(j+1);
                    for s = 1:64
                        in_p = floor((s-1)/32);
                        s0 = mod(2*(s-1), 64);
                        s1 = s0 + 1;
                        A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
                             + (bitand(s0,16)>0) + in_p, 2);
                        B0 = mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + (bitand(s0,16)>0) ...
                             + (bitand(s0,32)>0) + in_p, 2);
                        A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
                             + (bitand(s1,16)>0) + in_p, 2);
                        B1 = mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + (bitand(s1,16)>0) ...
                             + (bitand(s1,32)>0) + in_p, 2);
                        e0 = (A0 ~= str2double(A)) + (B0 ~= str2double(B));
                        e1 = (A1 ~= str2double(A)) + (B1 ~= str2double(B));
                        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                            new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                            path_keeper(s, d) = s0+1;
                        else
                            new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                            path_keeper(s, d) = s1+1;
                        end
                    end
                    least_error_keeper = new_least_error_keeper;
                    j = j+2;
                elseif(state == 1)
                    A = block(j);
                    for s = 1:64
                        in_p = floor((s-1)/32);
                        s0 = mod(2*(s-1), 64);
                        s1 = s0 + 1;
                        A0 = mod((bitand(s0,1)>0) + (bitand(s0,2)>0) + (bitand(s0,8)>0) ...
                             + (bitand(s0,16)>0) + in_p, 2);
                        A1 = mod((bitand(s1,1)>0) + (bitand(s1,2)>0) + (bitand(s1,8)>0) ...
                             + (bitand(s1,16)>0) + in_p, 2);
                        e0 = (A0 ~= str2double(A));
                        e1 = (A1 ~= str2double(A));
                        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                            new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                            path_keeper(s, d) = s0+1;
                        else
                            new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                            path_keeper(s, d) = s1+1;
                        end
                    end
                    least_error_keeper = new_least_error_keeper;
                    j = j+1;
                else
                    B = block(j);
                    for s = 1:64
                        in_p = floor((s-1)/32);
                        s0 = mod(2*(s-1), 64);
                        s1 = s0 + 1;
                        B0 = mod((bitand(s0,1)>0) + (bitand(s0,8)>0) + (bitand(s0,16)>0) ...
                             + (bitand(s0,32)>0) + in_p, 2);
                        B1 = mod((bitand(s1,1)>0) + (bitand(s1,8)>0) + (bitand(s1,16)>0) ...
                             + (bitand(s1,32)>0) + in_p, 2);
                        e0 = (B0 ~= str2double(B));
                        e1 = (B1 ~= str2double(B));
                        if((e0 + least_error_keeper(s0+1)) < (e1 + least_error_keeper(s1+1)))
                            new_least_error_keeper(s) = (e0 + least_error_keeper(s0+1));
                            path_keeper(s, d) = s0+1;
                        else
                            new_least_error_keeper(s) = (e1 + least_error_keeper(s1+1));
                            path_keeper(s, d) = s1+1;
                        end
                    end
                    least_error_keeper = new_least_error_keeper;
                    j = j+1;
                end
                d = d+1;
                state = mod(state+1, 3);
            end
    end
    
	[err, previous] = mink(least_error_keeper, 1);
	%least_error_keeper = zeros(64,1) + inf;
	%least_error_keeper(previous) = 0;
	%new_least_error_keeper = zeros(64,1);
	
	dec_block(1:24) = '0';
	for j = 24:-1:1
		p_str = dec2bin(previous-1, 6);
		dec_block(j) = p_str(1);
		previous = path_keeper(previous, j);
	end
	
	data(b:b+23) = dec_block;
	b = b+24;
end

error_mag = min(least_error_keeper);
decoded_frame = [signal, data];

end

