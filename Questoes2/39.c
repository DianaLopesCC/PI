int nivelV (ABin a, int n, int v[]) {
    int r;
    if (a==NULL) return 0;
    if (n==1){
        v[0]=a->valor;
        return 1;
    }
    r=nivelV(a->esq,n-1,v);
    r+=nivelV(a->dir,n-1,v+r);
    return r;
}