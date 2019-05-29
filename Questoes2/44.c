int addOrd (ABin *a, int x) {
    ABin aux=*a,ant,inicio;
    inicio=(ABin)malloc(sizeof(struct nodo));
    inicio->valor=x;
    inicio->dir=inicio->esq=NULL;
    if ((*a)==NULL){
        (*a)=inicio;
        return 0;
    }
    else{
        while (aux!=NULL){
            ant=aux;
            if (aux->valor>x){
                aux=aux->esq;
            }else aux=aux->dir;
        }
    }
    if (ant->valor > x){
        ant->esq=inicio;
    }else if (ant->valor <x) ant->dir=inicio;
    else return 1;
    return 0;
}