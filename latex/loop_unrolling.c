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
