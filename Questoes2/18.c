int maximo (LInt l){
    int n=l->valor;
    l=l->prox;
    if (l == NULL) return n;
    else{
        while (l != NULL){
            if (l->valor > n){
                n=l->valor;
                l=l->prox;
            }else l=l->prox;
        }
    }
    return n;
}