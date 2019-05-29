int removeOneOrd (LInt *l, int x){
    int r=0;
    LInt tmp;
    if ((*l) == NULL) r=1;
    else if ((*l)-> valor == x){
        tmp = (*l)-> prox;
        free(&((*l)->valor));
        (*l)=tmp;
    }
    else if ((*l)-> valor != x && (*l)->prox == NULL) r=1;
    else if ((*l)-> valor != x && (*l)->prox!=NULL) r=removeOneOrd(&((*l)->prox),x);
    return r;
}