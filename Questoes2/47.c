int maiorAB (ABin a) {
    int r=0;
    if (a==NULL) r=r-1;
    else if (a->dir==NULL) r=a->valor;
    else{
        r=maiorAB(a->dir);
    }
    return r;
}