clc; 
clear all;

fileID = fopen('testcase.txt','w');
for i=1:255
      w = dec2bin(i,16);
      fprintf(fileID,'%s \n',w);
end

for i=65280:65535
    w = dec2bin(i,16);
    fprintf(fileID,'%s \n',w);
end
fclose(fileID);


