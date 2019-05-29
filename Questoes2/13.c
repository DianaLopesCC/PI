void init (LInt *l){
    LInt tmp=(*l);
    if ((*l)->prox ==NULL){
        tmp=NULL;
    }else l=&((*l)->prox);
}