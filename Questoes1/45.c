#include <stdio.h>

int main() {
  int a,b;
	for (a = 65; a < 91; a++) {
	  printf ("%c %d\n",(char) a,a);
	}
	for(b=97;b<123;b++){
	  printf ("%c %d\n",(char) b,b);
	}
	return 0;
}
