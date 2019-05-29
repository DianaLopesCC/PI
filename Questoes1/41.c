int triSup (int N, float m[N][N]){
  int i, j, r=1;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(i>j && m[i][j]!=0) r=0;
    }
  }
  return r;
}
