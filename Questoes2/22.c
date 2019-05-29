int listToArray (LInt l, int v[], int N){
    int i=0;
    if (l== NULL) N=0;
    else {
        while(l!=NULL && i<N){
            v[i]=l->valor;
            l=l->prox;
            i++;
        }
        if (l==NULL) N=i;
    }
    return N;
}