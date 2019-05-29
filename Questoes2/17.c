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

LInt cloneL (LInt l){
    LInt r;
    if (l == NULL) return NULL;
    r=(LInt)malloc(sizeof(struct lligada));
    r->valor=l->valor;
    r->prox=cloneL(l->prox);
    return r;
}

LInt cloneRev (LInt l){
    LInt r;
    r=cloneL(l);
    r=reverseL(r);
    return r;
}