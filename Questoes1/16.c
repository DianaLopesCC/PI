char charMaisfreq (char s[]) {
    char r,res;
    int max=0,i=0;
    if (s=='\0'){
        return 0;
    }
    for (i=0;s[i]!='\0';i++){
        if (max < (quantas (s, s[i]))){
            max=quantas (s,s[i]);
            res=s[i];
        }
    }
    return res;
}