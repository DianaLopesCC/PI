int menosFreq (int v[], int N){
  int i, c=1, t=N, a=v[0];
  for(i=0; i<N; i++){
    if(v[i]==v[i+1]) c++;
    else{
      if(c<t){
        t=c;
        a=v[i];
      }
      c=1;
    }
  }
  return a;
}
  
