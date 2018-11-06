#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char* argv[]){
  // I suppose that I know the filenames and the number of rows
  clock_t begin = clock();
  int n;
  n = 1000;
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
    fscanf(input_2, "%lf", &vector[i]);
    for(int j = 0; j < n; j++){
      fscanf(input_1, "%lf", &matrix[i][j]);
    }
  }


  fclose(input_1);
  fclose(input_2);

  //Computing multiplication Matrix*vector
  // This is my "Kernel", which is equivalent to:
  // result[i] = result[i] + matrix[i][j]*vector[j];
  // E' equivalente a esempio mostrato oggi
  for(int i = 0; i < n; i++){
    result[i] = 0;
    //tmp = result[i];
    for(int j = 0; j < n; j++){
      result[i] += matrix[i][j]*vector[j];
      //result[i] = tmp;
    }
  }

  //Printing result
  /*
  for(int i = 0; i < n; i++){
    printf("%f\n", result[i]);
  }
  */

  //Free the matrix
  for(int i =  0; i < n; i++){
    free(matrix[i]);
  }
  free(matrix);

  //Free the vector
  free(vector);

  //Free the result
  free(result);

  clock_t end = clock();
  double delta = end - begin;
  printf("%f\n", delta);

  return 0;
}
