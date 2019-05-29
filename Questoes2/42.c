int contaFolhas (ABin a) {
    int f=0;
    if (a==NULL) f=f;
    else if (a->esq == NULL && a->dir == NULL) f=1;
    else if (a->esq != NULL && a->dir == NULL) f=contaFolhas(a->esq);
    else if (a->esq == NULL && a->dir != NULL) f=contaFolhas(a->dir);
    else f=contaFolhas(a->dir)+contaFolhas(a->esq);
    return f;
}