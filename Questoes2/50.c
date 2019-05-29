 void listToBTree (LInt l, ABin *a) {
    LInt aux;
    if (l==NULL){
        (*a)=NULL;
    }else{
        aux=parteAmeio(&l);
        (*a)=(ABin)malloc(sizeof(struct nodo));
        (*a)->valor=l->valor;
        listToBTree(aux,&((*a)->esq));
        listToBTree(l->prox,&((*a)->dir));
    }
}  
