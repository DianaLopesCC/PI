#include <stdio.h>

int main(){
  int i=0,d=0;
  int c;
  int media=0;
  printf("Numeros pretendidos(com o ultimo a 0)\n");
  scanf("%d",&c);
  while (c!=0){
    i++;
    d=d+c;
    media=d/i;
   scanf("%d",&c);
  }
  printf("A media total %d\n", media);
}
