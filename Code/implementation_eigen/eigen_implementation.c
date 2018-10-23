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
    if (!fscanf(input_2, "%lf", &vector(i))){
      break;
    }
    for(int j = 0; j < n; j++){
      if(!fscanf(input_1, "%lf", &matrix(i))){
        break;
      }
    }
  }
  //closing files
  fclose(input_1);
  fclose(input_2);

  result = matrix*vector;

  std::cout << result << "\n";



  return 0;
}
