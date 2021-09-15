function [frame] = descrambling(scrambled_frame)

    frame(1:24) = scrambled_frame(1:24);
    seed = scrambled_frame(25:31);
    frame(25:40) = '0000000000000000';
    len = bin2dec(frame(17:-1:6));
    
    for i=1:9
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
    end
    
    for i = 41:8*len+40
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        frame(i) = num2str(xor(str2double(scrambler_in), str2double(scrambled_frame(i))));
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
    end

    frame_len = length(scrambled_frame);
    frame(8*len+41:frame_len) = '0';
end

