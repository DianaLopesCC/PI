#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
	int valor;
	struct lligada *prox;
} *LInt;

void freeL (LInt l) {
	LInt p;
	if (l !=NULL){
		p=l->prox;
		freeL(l);
		l=p;
	}
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
	freeL (l);
	return 0;
}