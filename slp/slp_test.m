clc
clear
file_input = fopen('test.txt', 'w');
prompt = ' what is the number of your input?\n ';
x = input (prompt);
str = dec2bin(x, 8);
fprintf(file_input,'%s \n',str);
clear prompt;
prompt = ' what is weigth or input? ';
for i= 1: 2*x
    w_in = input (prompt);
    str = dec2bin(w_in, 8);
    fprintf(file_input,'%s \n',str);
end
fclose (file_input);


delete(instrfind);                                                                                      % init Serial port
serialOne = serial('COM3', 'BaudRate', 115200, 'StopBits', 2, 'DataBits', 8, 'Parity', 'none');
fopen(serialOne);
serialOne.ReadAsyncMode = 'continuous';
serialOne.Terminator = 10;
disp('Serial Port Opened - COM3 with 115200 BaudRate');

file_input = fopen('test.txt', 'r');
[input_data, count] = fscanf(file_input, '%s');
string_start = 1;
string_step = 8;
out = zeros(10,1);

disp('Sending data');
for i = 1 : 15000
    %pause(1);
    number_step = bin2dec(input_data(string_start : string_start + string_step - 1));
    string_start = string_start + string_step;
    fwrite(serialOne, number_step);
    
end

disp('Reading data');
N = serialOne.BytesAvailable;
fscanf(serialOne)

fclose(serialOne);% close Serial port
disp('Program terminated - Good Bye');