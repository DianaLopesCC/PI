LInt junta(LInt a,LInt b){
    LInt inicio=a;
    if (a==NULL){ 
        a=b;
        return a;
    }
    while (inicio->prox!=NULL) inicio=inicio->prox;
    inicio->prox=b;
    return a;
}
 
LInt nivelL (ABin a, int n) {
    LInt res,e,d;
    if (a==NULL) return NULL;
    if (n==1){
        res=(LInt)malloc(sizeof(struct nodo));
        res->valor=a->valor;
        res->prox=NULL;
        return res;
    }
    e=nivelL (a->esq,n-1);
    d=nivelL (a->dir,n-1);
    res=junta(e,d);
    return res;
}