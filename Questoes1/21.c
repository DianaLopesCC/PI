int ePrefixo(char p[], char g[]){
  int i=0;
  while(p[i]!='\0' && p[i]==g[i]) i++;
  if(p[i]!='\0') return 0;
  return 1;
}

int sufPref (char s1[], char s2[]){
  int i=0;
  while(!ePrefixo((s1+i), s2)) i++;
  return (strlen(s1+i));
}
  
