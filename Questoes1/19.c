#include <stdio.h>
#include <string.h>

int maiorPrefixo (char s1 [], char s2 []){
  int i,t=0;
  for (i=0; s1[i]!='\0' && s2[i]!='\0'; i++){
    if(s1[i]==s2[i]){
      t++;
    }else{
      break;
    }
  }
  return t;
}

int main () {
  char s1[]="dianas";
  char s2[]="duanas";
  int t;
  t=maiorPrefixo(s1,s2);
  printf ("%d",t);
  return 0;
}
