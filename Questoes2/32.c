LInt junta (LInt x, LInt n){
    LInt c=x;
    if (x==NULL) return n;
    else{
        while (x->prox!=NULL) x=x->prox;
        x->prox=n;
    }
    x=c;
    return x;
}
 
LInt criaArray (ABin a){
    LInt res=NULL,e,d;
    if (a!=NULL){
        res=(LInt)malloc(sizeof(struct lligada));
        res->valor=a->valor;
        e=criaArray(a->esq);
        res->prox=e;
        d=criaArray(a->dir);
        res=junta(res,d);
    }
    return res;
}
 
void preorder (ABin a, LInt * l) {
    (*l)=criaArray(a);
}