function [y] = shift_fixedpoint(x, n, m)
    format long;
    
    x = x*2^(-m);
    sign = x < 0;
    float_x = abs(x) - floor(abs(x));
    
    y = 0;
    for i = 1:n
        float_x = float_x * 2;
        y = y + (2^(-i))*floor(float_x);
        float_x = float_x - floor(float_x);
    end

    y = y + floor(abs(x));
    if(sign)
        y = -y;
    end
end

