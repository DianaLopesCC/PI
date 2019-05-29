# include <stdio.h>

int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
  int min=0;
  int i;
  for (i=0;i<N;i++){
    if (v1[i]!=0 && v2[i]!=0){
      if (v1[i]<v2[i]){
	min=v1[i];
      }else{min=v2[i];}
    }else{min=0;}
    r[i]=min;
    printf(" %d",r[i]);
  }
  return 0;
}

int main (){
  int v1[]={0,2,3,2,1};
  int v2[]={1,0,1,1,0};
  int r[5];
  intersectMSet(5,(v1),(v2),r);
  return 0;
}
