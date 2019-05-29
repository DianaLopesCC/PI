int pertence (int i, int v[], int n){
  int j;
  for(j=0; j<n; j++){
    if(v[j]==i) return 1;
  }
  return 0;
}

int comuns (int a[], int na, int b[], int nb){
  int i, c=0;
  for(i=0; i<na; i++){
    c = c + pertence(a[i],b,nb);
  }
  return c;
}
