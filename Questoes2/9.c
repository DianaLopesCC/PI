int length (LInt *l){
    int r=0;
    while((*l) !=NULL){
        r++;
        l=&((*l)->prox);
    }
    return r;
}

LInt parteAmeio (LInt *l){
    LInt res=NULL,ir;
    int m=length(&(*l));
    int i=1;
    int n;
    if (m%2!=0){
        n=((m-1)/2);
    }else{
        n=m/2;
    }
    if (n==0)return res;
    res=(*l);
    while (i<n){
        (*l)=(*l)->prox;
        i++;
    }
    ir=(*l)->prox;
    (*l)->prox=NULL;
    (*l)=ir;
    return res;
}
