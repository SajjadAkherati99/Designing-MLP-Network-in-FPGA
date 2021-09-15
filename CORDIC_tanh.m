function [tanh_Alpha] = CORDIC_tanh(Alpha, tanh_2_power__i, mode)
    format long;
    cosh_Alpha = 1;
    sinh_Alpha = 0;
    z = Alpha;
    n = 50;
    tanh_Alpha = 0;
    
    if (mode == "fixed_point")
        for i = -10:11
            if (z < 0) 
                d = -1; 
            else
                d = 1;
            end
            if (i <= 0)
                cosh_Alpha_Next = cosh_Alpha + sinh_Alpha*d - shift_fixedpoint(d*sinh_Alpha, n, 2-i);
                sinh_Alpha_Next = sinh_Alpha + cosh_Alpha*d - shift_fixedpoint(d*cosh_Alpha, n, 2-i);
                znew = z - d*tanh_2_power__i(i+11); 
                cosh_Alpha = cosh_Alpha_Next;
                sinh_Alpha = sinh_Alpha_Next;
                z = znew;
            else    
                cosh_Alpha_Next = cosh_Alpha + shift_fixedpoint(d*sinh_Alpha, n, i);
                sinh_Alpha_Next = sinh_Alpha + shift_fixedpoint(d*cosh_Alpha, n, i);
                znew = z - d*tanh_2_power__i(i+11);
                cosh_Alpha = cosh_Alpha_Next;
                sinh_Alpha = sinh_Alpha_Next;
                z = znew;
            end
        end
        tanh_Alpha_Value = 0;
        for i = 1:13
            if (sinh_Alpha < 0)
                d = 1;
            else
                d = -1;
            end
            sinh_Alpha = sinh_Alpha + shift_fixedpoint(d*cosh_Alpha, n, i);
            tanh_Alpha_Value = tanh_Alpha_Value - shift_fixedpoint(d, n, i);
        end
        tanh_Alpha = tanh_Alpha_Value;
    elseif (mode == "floating_point")
        for i = -10:11
            if (z < 0) 
                d = -1; 
            else
                d = 1;
            end
            if (i <= 0)
                cosh_Alpha_Next = cosh_Alpha + sinh_Alpha*d - d*sinh_Alpha*2^(i-2);
                sinh_Alpha_Next = sinh_Alpha + cosh_Alpha*d - d*cosh_Alpha*2^(i-2);
                znew = z - d*atanh(1-2^(i-2)); 
                cosh_Alpha = cosh_Alpha_Next;
                sinh_Alpha = sinh_Alpha_Next;
                z = znew;
            else    
                cosh_Alpha_Next = cosh_Alpha + d*sinh_Alpha*2^(-i);
                sinh_Alpha_Next = sinh_Alpha + d*cosh_Alpha*2^(-i);
                znew = z - d*atanh(2^(-i)); 
                cosh_Alpha = cosh_Alpha_Next;
                sinh_Alpha = sinh_Alpha_Next;
                z = znew;
            end
        end
        tanh_Alpha_Value = 0;
        for i = 1:13
            if (sinh_Alpha < 0)
                d = 1;
            else
                d = -1;
            end
            sinh_Alpha = sinh_Alpha + d*cosh_Alpha*2^(-i);
            tanh_Alpha_Value = tanh_Alpha_Value - d*2^(-i);
        end
        tanh_Alpha = tanh_Alpha_Value;
    end
end
