int lookupAB (ABin a, int x) {
    int r=0;
    if (a==NULL) r=r;
    else if (a->valor==x) r=1;
    else if (a->valor < x) r=lookupAB(a->dir,x);
    else r=lookupAB(a->esq,x);
    return r;
}
