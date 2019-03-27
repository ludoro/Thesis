#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]){
  // I suppose that I know the filenames and the number of rows
  int n = 1000;
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

  double tmp1,tmp2,tmp3,tmp4;
  for(int i = 0; i < n; i = i + 4){
    result[i] = 0;
    result[i+1] = 0;
    result[i+2] = 0;
    result[i+3] = 0;
    tmp1 = result[i];
    tmp2 = result[i+1];
    tmp3 = result[i+2];
    tmp4 = result[i+3];
    for(int j = 0; j < n; j = j + 4){
      tmp1 += matrix[i][j]*vector[j];
      tmp1 += matrix[i][j+1]*vector[j+1];
      tmp1 += matrix[i][j+2]*vector[j+2];
      tmp1 += matrix[i][j+3]*vector[j+3];

      tmp2 += matrix[i+1][j]*vector[j];
      tmp2 += matrix[i+1][j+1]*vector[j+1];
      tmp2 += matrix[i+1][j+2]*vector[j+2];
      tmp2 += matrix[i+1][j+3]*vector[j+3];

      tmp3 += matrix[i+2][j]*vector[j];
      tmp3 += matrix[i+2][j+1]*vector[j+1];
      tmp3 += matrix[i+2][j+2]*vector[j+2];
      tmp3 += matrix[i+2][j+3]*vector[j+3];

      tmp4 += matrix[i+3][j]*vector[j];
      tmp4 += matrix[i+3][j+1]*vector[j+1];
      tmp4 += matrix[i+3][j+2]*vector[j+2];
      tmp4 += matrix[i+3][j+3]*vector[j+3];
    }
    result[i] = tmp1;
    result[i+1] = tmp2;
    result[i+2] = tmp3;
    result[i+3] = tmp4;
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
