#include <stdio.h>
#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main(int argc, char *argv[]){
  // I suppose I get the filenames and the number of rows=cols
  int n;
  n = 3; //for example

  FILE* input_1;
  FILE* input_2;

  input_1 = fopen("matrix.txt", "r");
  input_2 = fopen("vector.txt", "r");

  //input = fopen("file.txt", "r");
  MatrixXd matrix(n,n);
  VectorXd vector(n);
  VectorXd result(n);


  //taking input
  for(int i = 0; i < n; i++){
      vector(i) = 1;
      for(int j = 0; j < n; j++){
        matrix(i,j) = i;
      }
    }
  //closing files
  fclose(input_1);
  fclose(input_2);

  result = matrix*vector;

  std::cout << result << "\n";



  return 0;
}
