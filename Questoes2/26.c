LInt rotateL (LInt l){
    LInt aux;
    if(l==NULL || l->prox==NULL) return l;
    aux=l;
    while(aux->prox!=NULL) aux=aux->prox;
    aux->prox=l;
    l=l->prox;
    aux->prox->prox=NULL;
    return l;
}