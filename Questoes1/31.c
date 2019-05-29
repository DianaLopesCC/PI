int retiraNeg (int v[], int N){
  int r, w=0;
  for(r=0; r<N; r++){
    if(v[r]>0){
      v[w]=v[r];
      w++;
    }
  }
  return w;
}