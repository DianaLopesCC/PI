int existe (ABin a , int x, int p){
    int e=-1, d=-1, r=-1;
    if(a!=NULL){
        if(a->valor==x) r=p;
        else{
            e=existe(a->esq, x, p+1);
            d=existe(a->dir, x, p+1);
            if(e==-1 && d==-1) r=-1;
            else{
                if(e!=-1 && d!=-1){
                    if(e<d) r=e;
                    else r=d;
                }
                else{
                    if(e!=-1) r=e;
                    else{
                        if(d!=-1) r=d;
                    }
                }
            }
        }
    }
    return r;
}


int depth (ABin a, int x) {
    int i=1;
    i=existe(a,x,i);
    return i;
}