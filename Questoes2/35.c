int freeAB (ABin a) {
    int n=0,n1=0,n2=0,t=0;
    ABin e,d;
    if (a==NULL) n;
    else{
        e=a->esq;
        d=a->dir;
        free (a);
        n++;
        n1=freeAB (e);
        n2=freeAB (d);
    }
    t=n+n1+n2;
    return t;
}