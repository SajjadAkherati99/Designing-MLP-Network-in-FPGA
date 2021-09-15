delete(instrfind);                                                                                      % init Serial port
serialOne = serial('COM3', 'BaudRate', 115200, 'StopBits', 2, 'DataBits', 8, 'Parity', 'none');
fopen(serialOne);
serialOne.ReadAsyncMode = 'continuous';
serialOne.Terminator = 10;
disp('Serial Port Opened - COM3 with 115200 BaudRate');

string_start = 1;
string_step = 8;
out = zeros(10,1);

disp('Sending data');
for i = 1 : 1024
    prompt = 'What is the value? ';
    x = input(prompt);
    y = floor (x*256);
    s = dec2bin(y,8);
    number_step = bin2dec(s);
    string_start = string_start + string_step;
    fwrite(serialOne, number_step);
    
end

disp('Reading data');
N = serialOne.BytesAvailable;
fscanf(serialOne)

for i=i:1024
    sprintf('%s\n', serialOne(8*i+1:8*i+8));
end

fclose(serialOne);% close Serial port
disp('Program terminated - Good Bye');