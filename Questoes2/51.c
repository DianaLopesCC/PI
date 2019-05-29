int todosMaiores (ABin a, int x){
    int e,d;
    if (a==NULL) return 1;
    else if (a->valor >= x){
        e=todosMaiores(a->esq,x);
        d=todosMaiores(a->dir,x);
        if (e==1 && d==1) return 1;
        else return 0;
    }
}

int todosMenores (ABin a, int x){
    int e,d;
    if (a==NULL) return 1;
    else if (a->valor <= x){
        e=todosMenores(a->esq,x);
        d=todosMenores(a->dir,x);
        if (e==1 && d==1) return 1;
        else return 0;
    }
}
 
int deProcura (ABin a) {
   if (a==NULL) return 1;
   else {
       if ((todosMenores (a->esq,a->valor) == 1) && 
       	   (todosMaiores (a->dir,a->valor) == 1) &&
       	   (deProcura(a->esq))==1 &&
       	   (deProcura(a->dir))==1) return 1;
       else return 0;
   }
}