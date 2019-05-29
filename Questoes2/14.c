void appendL (LInt *l, int x){
    LInt a=(*l),aux;
    if ((*l) == NULL){
        aux=(LInt)malloc(sizeof(struct lligada));
        aux->valor=x;
        aux->prox=NULL;
        a=aux;
    }else{
        while ((*l)->prox != NULL){
            (*l)=(*l)->prox;
        }
        aux=(LInt)malloc(sizeof(struct lligada));
        aux->valor=x;
        aux->prox=NULL;
        (*l)->prox=aux;
    }
    (*l)=a;
}