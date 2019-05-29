#include <stdio.h>

int intersectSet (int N, int v1[N],int v2[N],int r[N]){
  int i;
  for(i=0;i<N;i++){
    if ((v1[i] == 1) && (v2[i] == 1)){
      r[i] = 1;
      printf("%d ",r[i]);
    }
    if (v1[i] == 0 || v2[i] == 0){
      r[i] = 0;
      printf("%d ",r[i]);
    }
  }
  return 0;
}

int main (){
  int v1[]={1,0,1,0,0};
  int v2[]={1,1,0,0,1};
  int r[5];
  intersectSet (5,(v1),(v2),r);
  return 0;
}
