int removeMaiorL (LInt *l){
    int m;
    LInt inicio=(*l),tmp;
    m=(*l)->valor;
    if (m==maximo ((*l))){
        inicio = (*l)->prox;
        free((*l));
        (*l)=inicio;
    }else{
        while((*l)!=NULL){
            m=(*l)->prox->valor;
            if (m==maximo((*l)->prox)){
                tmp=(*l)->prox->prox;
                free((*l)->prox);
                (*l)->prox=tmp;
                break;
            }else{
                (*l)=(*l)->prox;
            }
        }
    }
    (*l)=inicio;
    return m;
}