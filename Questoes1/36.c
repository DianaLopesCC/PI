int elimRepOrd(int v[], int n){
  int r, w=0;
  for(r=0; r<n; r++){
    if(v[r]!=v[r+1]){
      v[w]=v[r];
      w++;
    }
  }
if(w==0) return 1;
  return w;
}