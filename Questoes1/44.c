void sumDiag (int N, int m[N][N]){
  int i, j, c=0;
  for(i=0; i<N; i++){
    c=0;
    for(j=0; j<N; j++){
      if(i!=j) c += m[i][j];
      m[i][i]=c;
    }
  }
}
