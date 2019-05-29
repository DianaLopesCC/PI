LInt somasAcL (LInt l) {
    LInt res=NULL,inicio;
    int m=0;
    if (l!=NULL){
        if (res==NULL){
            inicio=res=(LInt)malloc(sizeof(struct lligada));
            m=m+l->valor;
            res->valor=m;
            l=l->prox;
        }
         while (l!=NULL){
            res->prox=(LInt)malloc(sizeof(struct lligada));
            m=m+l->valor;
            res->prox->valor=m;
            res=res->prox;
            l=l->prox;
        }
        res->prox=NULL;
    }
    res=inicio;
    return res;
}