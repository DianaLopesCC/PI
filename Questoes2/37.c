int iguaisAB (ABin a, ABin b) {
    int n=1;
    int e,d;
    if (a== NULL && b== NULL) n=1; 
    else if (a== NULL && b!= NULL) n=0;
    else if (a!= NULL && b== NULL) n=0;
    else if (a->valor != b->valor) n=0;
    else if (a->valor == b->valor){
        e= iguaisAB(a->esq,b->esq);
        d= iguaisAB(a->dir,b->dir);
        if (e == 0 && d == 0) n=1;
        else if (e!=0 && d==0) n=0;
        else if (e==0 && d!=0) n=0;
        else if (e!=0 && d!=0) n=1;
    }
    return n;
}