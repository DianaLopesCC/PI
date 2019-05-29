int dumpAbin (ABin a, int v[], int N) {
    int n=0,e=0,d=0;
    if (a==NULL || N==0) n=n;
    else{
        e=dumpAbin(a->esq,v,N);
        n=e;
        if (e<N){
            v[e]=a->valor;
            n++;
            d=dumpAbin(a->dir,v,N-e-1);
            n=n+d;
        }
    }
    return n;
}