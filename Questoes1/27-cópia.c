int limpaEspacos(char t[]){
  int r, w=0;
  for(r=0; t[r]!='\0'; r++){
    if(t[r]!=' '){
      t[w]=t[r];
      w++;
    }
    else if(t[r]==' ' && t[r+1]!=' '){
      t[w]=t[r];
      w++;
      }
  }
  t[w]='\0';
  return strlen(t);
}