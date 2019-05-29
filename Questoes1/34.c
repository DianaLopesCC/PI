# include <stdio.h>

int maxCresc (int v[], int N) {
  int i,a,c=1,res=1;
  a=v[0];
  for (i=1; i < N; ++i) {
    if (v[i]>=a) {
      c++;
      a=v[i];
    } else {
      if (c>res) {
	a=v[i];
	res=c;
	c=1;
      } else {
	a=v[i-1];
	c=1;
      }
    }
  }
  if (c>res)
    res=c;
  return res;
}

int main () {
  int v[]={1, 2, 3, 2, 1, 4, 10, 12, 5, 4};
  int r;
  r=maxCresc(v,10);
  printf("%d \n", r);
  return r;
}
