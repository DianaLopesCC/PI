LInt parte(LInt l) {
  int i=1;
  LInt r, auxl, auxr;

  if(l==NULL || l->prox==NULL) {
    return NULL;
  }
  
  auxr=r=l->prox;
  auxl = l;
  l=r->prox;

  while(l!=NULL) {
    auxl->prox = l;
    auxl=auxl->prox;
    l=l->prox;
    if (l!=NULL) {
      auxr->prox=l;
      auxr = auxr->prox;
      l=l->prox;
    }
  }
  auxl->prox=auxr->prox=NULL;
  return r;
}