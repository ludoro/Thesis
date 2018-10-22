#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
  int n;
  n = 50;

  //Matrix allocation
  double **matrix = (double **)malloc(n * sizeof(double*));
  for(int i =  0; i < n; i++){
    matrix[i] = (double *)malloc(n*sizeof(double));
  }

  //Vector allocation
  double* vector = (double *)malloc(n*sizeof(double*));

  //Result allocation
  double* result = (double *)malloc(n*sizeof(double*));


  //Creating vector and matrix of 1's for testing
  for(int i = 0; i < n; i++){
    vector[i] = 1;
    for(int j = 0; j < n; j++){
      matrix[i][j] = 1;
    }
  }

  //Computing multiplication Matrix*vector
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
