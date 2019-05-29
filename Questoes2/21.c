LInt NForward (LInt l, int N){
    int i;
    for(i=0; i!=N; i++)
        l=l->prox;
    return l;
}