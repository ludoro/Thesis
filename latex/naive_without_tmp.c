for(int i = 0; i < n; i++){
  result[i] = 0;
  for(int j = 0; j < n; j++){
    result[i] += matrix[i][j]*vector[j];
  }
}
