#pragma omp parallel
{
  LIKWID_MARKER_THREADINIT;
  LIKWID_MARKER_START("Compute");
  #pragma omp for private(i,j) collapse(2)
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      result[i] = 0;
      result[i] += matrix[i][j]*vector[j];
    }
  }
