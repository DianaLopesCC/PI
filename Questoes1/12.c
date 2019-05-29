char *mystrstr (char s1[], char s2[]){
    int i,j=0; 
    if (s1[0]=='\0' && s2[0]=='\0') return s1;
    for (i=0;s1[i]!='\0';i++){
        for (j=0;s2[j]!='\0'; j++)
            if (s2[j]!=s1[i+j]) break;
        if (s2[j] =='\0') return (s1+i);
    }
    return NULL;
}