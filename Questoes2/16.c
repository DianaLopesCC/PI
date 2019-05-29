
LInt cloneL (LInt l){
	LInt r;
    if (l == NULL) return NULL;
    r=(LInt)malloc(sizeof(struct lligada));
    r->valor=l->valor;
    r->prox=cloneL(l->prox);
	return r;
}

