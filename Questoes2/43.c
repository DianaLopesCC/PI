ABin cloneMirror (ABin a) {
    ABin b;
    if (a==NULL) b=NULL;
    else{
        b=(ABin) malloc (sizeof(struct nodo));
        b->valor=a->valor;
        b->dir=cloneMirror(a->esq);
        b->esq=cloneMirror(a->dir);
    }
    return b;
}