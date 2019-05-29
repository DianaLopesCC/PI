void remreps (LInt l){
    LInt b;
    if (l==NULL || l->prox == NULL);
    else{
        while (l->prox!=NULL){
            if (l->valor == l->prox->valor){
                b=l->prox;
                l->prox=l->prox->prox;
                free(b);
            } else l=l->prox;
        }
    }
}