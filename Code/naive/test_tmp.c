#include <stdlib.h>
#include <stdio.h>

int main(){
  int n = 40;
  double tmp;
  FILE* input_1;
  FILE* input_2;
  input_1 = fopen("matrix_from_matlab.txt", "r");
  input_2 = fopen("vector_from_matlab.txt", "r");
  double **matrix = (double **)malloc(n *sizeof(double*));
  for(int i = 0; i < n; i++){
    matrix[i] = (double*)malloc(n*sizeof(double));
  }

  double* vector = (double*)malloc(n*sizeof(double*));
  double* result = (double*)malloc(n*sizeof(double*));

  /*
  for(int i = 0; i<n; i++){
    fscanf(input_2, "%lf", &vector[i]);
    for(int j = 0; j<n; j++){
      fscanf(input_1,"%lf", &matrix[i][j]);
    }
  }
  */

  fclose(input_1);
  fclose(input_2);

  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      matrix[i][j] = 0;
    }
  }

  for(int j = 0; j<n; j++){
    matrix[j][j] = 1;
    vector[j] = 1;
  }

  for(int i = 0; i < n; i++){
    result[i] = 0;
    tmp = result[i];
    for(int j = 0; j < n; j++){
      tmp += matrix[i][j]*vector[j];
    }
    result[i] = tmp;
  }



  for(int i = 0; i < n; i++){
    printf("%lf\n", result[i]);
  }


  for(int i = 0; i < n; i++){
      free(matrix[i]);
  }
  free(matrix);
  free(vector);
  free(result);

  return 0;
}
