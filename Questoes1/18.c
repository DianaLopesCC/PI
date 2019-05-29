int todos (char s[]){
    int i,j;
    for (i=0;s[i]!='\0';i++){
        for(j=0;j<i;j++){
            if (s[i]==s[j]) return i;
        }
    }
    return i;
}

int difConsecutivos (char s []) {
  int i,j=0,total;
  for (i = 0; s[i] != '\0'; ++i) {
    total=todos(s+i);
    if (total>j)j=total;
  }
  return j;
}