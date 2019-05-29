#include <stdio.h>

int unionMSet (int N,int v1[N],int v2[N],int r[N] ){
  int i,j;
  for (i=0;i<N;i++){
    r[i]=v1[i]+v2[i];
    printf(" %d ",r[i]);
  }
  return 0;
}

int main (){
  int v1[]={1,2,3,2,1};
  int v2[]={2,1,0,1,2};
  int r[5];
  unionMSet(5,(v1),(v2),r);
  return 0;
}
