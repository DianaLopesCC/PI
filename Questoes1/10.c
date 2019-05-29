#include <stdio.h>
#include <string.h>

char *strCpy (char *dest, char source[]){
  int i=0;
  while(source[i] != '\0'){
    dest[i]=source[i];
    i++;
  }
  dest[i]='\0';
  return dest;
}

int main (){
  char source[]="flhshc";
  char dest[]={};
  printf("%s \n",strCpy(dest,source));
  return 0;
}

  
