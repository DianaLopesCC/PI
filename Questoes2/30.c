void mirror (ABin *a) {
    ABin tmp;
    if ((*a)==NULL){}
    else {
        tmp=(*a)->dir;
        (*a)->dir=(*a)->esq;
        (*a)->esq=tmp;
        mirror(&(*a)->esq);
        mirror(&(*a)->dir);
    }
}