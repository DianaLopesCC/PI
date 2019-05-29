void concatL (LInt *a, LInt b){
    LInt ini=(*a);
    if ((*a)==NULL) ini=b;
    else{
        while((*a)->prox != NULL){
            (*a)=(*a)->prox;
        }
        (*a)->prox=b;
    }
    (*a)=ini;
}