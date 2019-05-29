 int pruneAB (ABin *a, int l) {
     int r=0;
     if ((*a)==NULL) return 0;
     if (l==0){
         r=freeAB((*a));
         (*a)=NULL;
     }else{
        r+=pruneAB (&((*a)->esq), l-1);
        r+=pruneAB (&((*a)->dir), l-1);
     }
     return r;
 }