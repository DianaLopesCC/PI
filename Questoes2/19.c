int take (int n, LInt *l){
    int cmp=0;
    LInt tmp;
    if ((*l)==NULL && n!=0){
        cmp=cmp;
    }else{
        while ((*l)!=NULL && n>0){
            l=&((*l)->prox);
            cmp++;
            n--;
        }
        if ((*l)!=NULL && n==0){
            free((*l));
            (*l)=NULL;
        }
    }
    return cmp;
}