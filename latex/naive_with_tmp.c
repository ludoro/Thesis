for(int i = 0; i < n; i++){
  result[i] = 0;
  tmp = result[i];
  for(int j = 0; j < n; j++){
    tmp = tmp + matrix[i][j]*vector[j];
  }
  result[i] = tmp;
}
