void insere (int v[], int N, int x){
  int i, temporario;
  for(i=0; i<N; i++){
    if(x<v[i]){
      temporario=v[i];
      v[i]=x;
      x=temporario;
    }
  }
  v[i]=x;
}
      
