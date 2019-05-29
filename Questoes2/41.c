int somas(ABin l){
    int r=0;
    if (l==NULL) return 0;
    else{
       r=l->valor;  
    }
    return r;
}

ABin somasAcA (ABin a) {
    ABin aux=NULL;
    if (a!=NULL){
        aux=(ABin)malloc(sizeof(struct nodo));
        aux->esq=somasAcA(a->esq);
        aux->dir=somasAcA(a->dir);
        aux->valor=a->valor+somas(aux->esq)+somas(aux->dir);
    }
    return aux;
}