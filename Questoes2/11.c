int existe(int v[], int N, int x) {
  int i;
  for(i=0; i<N; i++) {
    if(v[i]==x)
      return 1;
  }
  return 0;
}

int length (LInt l){
    int c=1;
    if(l==NULL) c=0;
    else{
        while((l->prox)!=NULL){
            c++;
            l=l->prox;
        }
    }
    return c;
}

int removeDups (LInt *l){
    int *v, c=0, N=0, i;
    LInt aux=(*l), ant;
    i=length((*l));
    v=(int*)malloc(sizeof(int)*i);
    v[N]=(*l)->valor;
    N++;
    ant=(*l);
    aux=(*l)->prox;
    while(aux!=NULL){
        if(!existe(v,N,aux->valor)){
            v[N]=aux->valor;
            N++;
            aux=aux->prox;
            ant=ant->prox;
        }
        else{
            ant->prox=aux->prox;
            free(aux);
            aux=ant->prox;
            c++;
        }
    }
}