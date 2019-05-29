void removeMaiorA (ABin *a){
    ABin t,aux=(*a),antes;
    if ((*a)->dir ==NULL){
        t=(*a)->esq;
        free((*a));
        (*a)=t;
    }else{
        while (aux->dir != NULL){
            antes=aux;
            aux=aux->dir;
        }
        if (aux->esq==NULL){
            free(aux);
            antes->dir=NULL;
        }else{
            t=aux->esq;
            free(aux);
            antes->dir=t;
        }
    }
}