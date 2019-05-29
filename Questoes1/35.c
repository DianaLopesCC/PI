int naoPertence (int a, int v[], int n){
  int i;
  for(i=0; i<n; i++){
    if(a==v[i]) return 0; //ou seja, pertence
  }
  return 1; //ou seja, nao pertence
}

int elimRep(int v[], int n){
  int r, w=0;
  int s[n];
  for(r=0; r<n; r++){
    if(naoPertence(v[r],s,w)){
      s[w]=v[r];
      w++;
    }
  }
  for(r=0; r<w; r++){ 
    v[r]=s[r];
  }
  return w;
}