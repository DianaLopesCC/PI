#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
	int valor;
	struct lligada *prox;
} *LInt;

int length (LInt l){
	int r=0;
	while (l != NULL){ 
		r++;
		l=l->prox;
	}
	return r;
}


int main(){
  int numero;
  LInt l, aux;
  l = NULL;
while(scanf("%d ",&numero)){
  aux = (LInt)malloc(sizeof(struct lligada));
  aux -> valor = numero;
  aux -> prox = l;
  l = aux;
}
numero = length(l);
printf("%d\n",numero);
return 0;

/*	LInt l= (l->valor=4;);
	printf("%d\n", length(l) );
	return length(l);
*/
}