clc
clear
file_input = fopen('test.txt', 'w');
prompt = ' what is the number of your input vectors?\n ';
v = input (prompt);
str = dec2bin(v, 8);
fprintf(file_input,'%s \n',str);
prompt = ' what is the number of your hidden layers?\n ';
l = input (prompt);
str = dec2bin(l, 8);
fprintf(file_input,'%s \n',str);
prompt = ' what is the number of your neurons?\n ';
n = input (prompt);
str = dec2bin(n, 8);
fprintf(file_input,'%s \n',str);
prompt = ' what is weigth? ';
for i= 1: n*(v+n*(l-1)+1)
    w = input (prompt);
    str = dec2bin(w, 8);
    fprintf(file_input,'%s \n',str);
end
prompt = ' what is input? ';
for i= 1: v
    w = input (prompt);
    str = dec2bin(w, 8);
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