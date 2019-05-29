void splitMS (LInt l, int x, LInt *mx, LInt *Mx){
    LInt  auxm=NULL, auxM=NULL;
    (*mx)=NULL;
    (*Mx)=NULL;
    if(l==NULL);
    else{
        while(l!=NULL){
	        if(l->valor < x){
		        if((*mx)==NULL){
                    (*mx)=l;
                    auxm=l;
                    l=l->prox;
                }
                else{
                    auxm->prox=l;
                    l=l->prox;
                    auxm=auxm->prox;
                }
            }
            else{
                if((*Mx)==NULL){
                    (*Mx)=l;
                    auxM=l;
                    l=l->prox;
                }
                else{
                    auxM->prox=l;
                    l=l->prox;
                    auxM=auxM->prox;
                }
            }
        }
    }
    if(auxm!=NULL) auxm->prox=NULL;
    if(auxM!=NULL) auxM->prox=NULL;
}