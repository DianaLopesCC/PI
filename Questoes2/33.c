LInt junta (LInt a,LInt x){
    LInt r=a;
    if (a==NULL)return x;
    else{
        while (a->prox != NULL) a=a->prox;
        a->prox=x;
    }
    a=r;
    return a;
 }
 
 LInt criaArray (ABin a){
     LInt res=NULL,e ,d;
     if (a!=NULL){
         e=criaArray(a->esq);
         d=criaArray(a->dir);
         res=(LInt)malloc(sizeof(struct lligada));
         res->valor=a->valor;
         res->prox=NULL;
         e=junta(e,d);
         res=junta(e,res);
     }
     return res;
 }
 
 void posorder (ABin a, LInt * l) {
    (*l)=criaArray (a);
}