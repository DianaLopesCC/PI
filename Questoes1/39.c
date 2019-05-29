# include <stdio.h>

int minInd (int v[], int n){
  int i,m=v[0],r=0;
  for (i=1;i<n;i++){
    if (v[i]<m){
      m=v[i];
      r=i;
    }
  }
  return r;
}

int main () {
  int v[]={2,3,1,4,5};
  int n=5;
  int r;
  r=minInd(v,n);
  printf("%d",r);
  return 0;
}
