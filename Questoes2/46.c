int depthOrd (ABin a, int x) {
    int n=0;
    int e,d;
    if (a==NULL) n=n-1;
    else if (a->valor==x) n=1;
    else if (a->valor > x){
        e=encontrei(a->esq,x);
        if(e==0){
            n=n+1+depthOrd(a->esq,x);
        }else n=-1;
    }
    else{
        d=encontrei(a->dir,x);
        if (d==0){
            n=n+1+depthOrd(a->dir,x);
        }else n=-1;
    }
    return n;
}

int encontrei (ABin a,int x){
    int e,d;
    if (a==NULL) return 1;
    else if (a->valor == x) return 0;
        else {
           e=encontrei(a->esq,x);
           d=encontrei(a->dir,x);
           if (e==0 && d==0) return 0;
           else if (e==1 && d==0) return 0;
           else if (e==1 && d==1) return 1;
           else return 0;
        }
}