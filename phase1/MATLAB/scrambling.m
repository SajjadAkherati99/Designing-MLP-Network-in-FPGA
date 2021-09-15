function [scrambled_frame] = scrambling(frame,seed)
    scrambled_frame(1:24) = frame(1:24);
    len = bin2dec(frame(17:-1:6));
    
    
    for i=1:16
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        scrambled_frame(i+24) = scrambler_in;
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
    end
    
    for i = 41:8*len+40
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        scrambled_frame(i) = num2str(xor(str2double(scrambler_in), str2double(frame(i))));
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
    end
    
    scrambled_frame(8*len+41: 8*len+46) = '000000';
    for i=1:6
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
    end 
    
    for i = 8*len+47: length(frame)
        scrambler_in = num2str(xor(str2double(seed(4)), str2double(seed(7))));
        for j=7:-1:2
            seed(j) = seed(j-1);
        end
        seed(1) = scrambler_in;
        scrambled_frame(i) = scrambler_in;
    end
end

