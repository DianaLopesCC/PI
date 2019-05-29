LInt arrayToList (int v[], int N){
    LInt res,inicio;
    int i=0;
    if (N==0) return NULL;
    else{
        inicio=res=(LInt)malloc (sizeof (struct lligada));
        res->valor=v[i];
        res->prox=NULL;
       for (i=1;i<N;i++){
           res->prox=(LInt)malloc (sizeof (struct lligada));
           res->prox->valor=v[i];
           res->prox->prox=NULL;
           res=res->prox;
        }
    }
    return inicio;
}