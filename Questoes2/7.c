void merge (LInt *r, LInt l1, LInt l2){
    LInt inicio,ultimo;
    if (l2==NULL && l1!= NULL) (*r)=l1;
    else if (l1==NULL && l2!=NULL) (*r)=l2;
        else{
            if (l1->valor < l2->valor){
                inicio=l1;
                l1=l1->prox;
            }else{
                inicio=l2;
                l2=l2->prox;
            }
            ultimo=inicio;
            while (l1!=NULL && l2!=NULL){
                if (l1->valor < l2->valor){
                    ultimo->prox=l1;
                    l1=l1->prox;
                    ultimo=ultimo->prox;
                }else{
                    ultimo->prox=l2;
                    l2=l2->prox;
                    ultimo=ultimo->prox;
                }
            }
            if (l1!=NULL && l2==NULL) ultimo->prox=l1;
            else if (l1==NULL && l2!=NULL) ultimo->prox=l2;
            (*r)=inicio;
    }
}