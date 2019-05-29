int altura (ABin a){
    int r=0;
    int e = 0,d = 0;
    if (a==NULL) return r;
    else{
        e=altura(a->esq);
        d=altura(a->dir);
        if (e>=d){
            r=r+1+e;
        }else{
            r=r+1+d;
        }
    }
	return r;
}