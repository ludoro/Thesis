%Files
file_matrix= fopen('matrix_from_matlab.txt', 'wt');
file_vector = fopen('vector_from_matlab.txt', 'wt');

%Initialisation 
A = eye(1000);
v = ones(1000,1);

%Putting stuff into .txt's
for i = 1:size(A,1)
    fprintf(file_matrix,'%g\t',A(i,:));
    fprintf(file_matrix,'\n');
end
for i = 1:size(v)
    fprintf(file_vector,'%g\t',v(i));
    fprintf(file_vector,'\n');
end

%Closing files
fclose(file_matrix);
fclose(file_vector);