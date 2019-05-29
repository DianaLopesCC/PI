int removeAll (LInt *l, int x){
    LInt tmp;
    int cont=0;
    while ((*l) != NULL){
        if ((*l)->valor == x){
            tmp=(*l)->prox;
            free((*l));
            (*l)=tmp;
            cont++;
        }else l=&(*l)->prox;
    }
    return cont;
}