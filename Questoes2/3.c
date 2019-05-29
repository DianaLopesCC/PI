# import <stdio.h>
#include <stdlib.h>

typedef struct lligada {
	int valor;
	struct lligada *prox;
} *LInt;

void imprimeL (LInt l){
	LInt a;
	a=l;
	while (a!=NULL){
		printf(" %d \n", a->valor);
		a=a->prox;
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
	imprimeL(l);
	return 0;
}