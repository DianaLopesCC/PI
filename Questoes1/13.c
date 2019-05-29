#include <stdio.h>
#include <string.h>

void troca (char s[], int a, int b){
  char aux;
  aux=s[a];
  s[a]=s[b];
  s[b]=aux;

}

void strrev (char s[]){
  int n=strlen(s)-1;
  int i, h;
  h=n/2;
  for(i=0; i<=h; i++){
    troca(s,i,n);
    n--;
  }
  printf("%s \n",(s));
}

int main (){
  char s[]="anaid";
  strrev(s);
  return 0;
}
