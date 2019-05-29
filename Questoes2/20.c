int drop (int n, LInt *l){
    int rm=0;
    LInt tmp;
    if ((*l)==NULL && n!=0){
        rm=rm;
    }else{
        while ((*l)!=NULL && n>0){
            tmp=(*l)->prox;
            free (*l);
            (*l)=tmp;
            rm++;
            n--;
        }
    }
    return rm;
}