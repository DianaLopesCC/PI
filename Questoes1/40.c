#include <stdio.h>

void somasAc (int v[], int Ac [], int N){
  int j,i,n=0;
  for (i=0; i<N; i++){
    j=i;
    if (j==0){
      n+=v[j];
    }else{
      n+=v[j];
      j--;
    }
    Ac[i]=n;
    printf("%d ",Ac[i]);
  }
}

int main () {
  int v[]={1,2,3,4,5};
  int N=5;
  int Ac[N];
  somasAc(v,Ac,N);
  return 0;
}
  
    
      
