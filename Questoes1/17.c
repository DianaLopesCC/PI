int iguaisConsecutivos(char s[]){
    int i, contador=1, c=1;
    if(s[0]=='\0') return 0;
    for (i=0; s[i]!='\0'; i++){
        if(s[i]==s[i+1]) contador++;
        else {
            if(c<contador) c=contador;
            contador=1;
        }
    }
    return c;
}