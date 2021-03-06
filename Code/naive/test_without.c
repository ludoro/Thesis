#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]){
  // I suppose that I know the filenames and the number of rows
  int n = 40;
  //double tmp;
  FILE* input_1;
  FILE* input_2;

  input_1 = fopen("matrix_from_matlab.txt", "r");
  input_2 = fopen("vector_from_matlab.txt", "r");

  //Matrix allocation
  double **matrix = (double **)malloc(n * sizeof(double*));
  for(int i =  0; i < n; i++){
    matrix[i] = (double *)malloc(n*sizeof(double));
  }

  //Vector allocation
  double* vector = (double *)malloc(n*sizeof(double*));

  //Result allocation
  double* result = (double *)malloc(n*sizeof(double*));


  //Creating vector and matrix of 1's for testing ( I will take those from file)
  for(int i = 0; i < n; i++){
    vector[i] = 1;
    for(int j = 0; j < n; j++){
      matrix[i][j] = 0;
      matrix[j][j] = 1;
    }
  }


  fclose(input_1);
  fclose(input_2);


  for(int i = 0; i < n; i++){
    result[i] = 0;
    for(int j = 0; j < n; j++){
      result[i] += matrix[i][j]*vector[j];
    }
  }

  //Printing result

  for(int i = 0; i < n; i++){
    printf("%f\n", result[i]);
  }


  //Free the matrix
  for(int i =  0; i < n; i++){
    free(matrix[i]);
  }
  free(matrix);

  //Free the vector
  free(vector);

  //Free the result
  free(result);


  return 0;
}
