# import <stdio.h>
#include <stdlib.h>

typedef struct lligada {
	int valor;
	struct lligada *prox;
} *LInt;

LInt reverseL (LInt l){
	LInt r,tmp ,aux = l ;
	r=NULL;
	while (aux!=NULL){
		tmp = aux-> prox;
		aux -> prox = r;
		r = aux;
		if (tmp != NULL) aux = tmp;
		else break;
	}
	return aux;
}

void imprimeL (LInt l){
	while (l!=NULL){
		printf(" %d \n", l->valor);
		l=l->prox;
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
	aux=reverseL(l);
	imprimeL (aux);
	return 0;
}