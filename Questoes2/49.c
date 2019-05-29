int quantosMaiores (ABin a, int x) {
    int r=0;
    int e=0,d=0;
    if (a==NULL) return r;
    else if (a->valor <= x){
        r=quantosMaiores (a->dir,x);
    }else{
        e=quantosMaiores(a->esq,x);
        d=quantosMaiores(a->dir,x);
        r=r+1+e+d;
    }
    return r;
}