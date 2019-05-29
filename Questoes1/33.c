int maisFreq (int v[], int N){
  int i, c=0, t=1, a=v[0];
  for(i=0; i<N; i++){
    if(v[i]==v[i+1]){
      c++;
    }
    else{
       if(t<c){
        t=c;
        a=v[i];
      }
      c=0;
    }
  }
  return a;
}
