#include <stdio.h>
#include <string.h>

void strnoV ( char s []){
  int i,a;
  a=0;
  for (i=0; s[i] != '\0' ;i++){
    if( s[i]=='a' || s[i]=='e' || s[i]== 'i' || s[i]=='o' || s[i]== 'u' || s[i]=='A' || s[i] == 'E' || s[i] == 'I' || s[i]=='O' || s[i]=='U') ;
    else {
      s[a] = s[i];
      printf ("%c",s[a]);
      a++;
    }
  }
  s[a]='\0';
}

int main () {
  char s[]="dIana";
  strnoV(s);
  return 0;
}
