ABin cloneAB (ABin a) {
    ABin r;
    if (a==NULL) r=NULL;
    else {
        r=(ABin)malloc(sizeof(struct nodo));
        r->valor=a->valor;
        r->esq=a->esq;
        r->dir=a->dir;
    }
    return r;
}