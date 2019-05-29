LInt junta (LInt e, LInt x){
    LInt a=e;
    if (e==NULL) return x;
    else{
        while (e->prox !=NULL) e=e->prox;
        e->prox=x;
    }
    e=a;
    return e;
}
 
LInt criaArray (ABin a){
    LInt res=NULL,e,d;
    if (a!=NULL){
        e=criaArray(a->esq);
        res=(LInt)malloc(sizeof(struct lligada));
        res->valor=a->valor;
        d=criaArray(a->dir);
        res->prox=d;
        res=junta(e,res);
    }
    return res;
}
 
void inorder (ABin a, LInt * l) {
    (*l)=criaArray(a);
}