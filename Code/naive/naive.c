#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
  // I suppose that I know the filenames and the number of rows
  int n;
  n = 3;

  FILE* input_1;
  FILE* input_2;

  input_1 = fopen("matrix.txt", "r");
  input_2 = fopen("vector.txt", "r");

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
    if(!fscanf(input_2, "%lf", &vector[i])){
      break;
    }
    for(int j = 0; j < n; j++){
      if (!fscanf(input_1, "%lf", &matrix[i][j]))
           break;
    }
  }


  fclose(input_1);
  fclose(input_2);

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
