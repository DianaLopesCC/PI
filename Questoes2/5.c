void insertOrd (LInt *l, int x){
    LInt tmp=(LInt) malloc (sizeof (struct lligada));
    while ((*l) != NULL && (*l)->valor <= x){
        l = &((*l)->prox);
    }
    tmp->valor=x;
    tmp->prox=(*l);
    *l=tmp;
}