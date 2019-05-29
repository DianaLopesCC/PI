char *mystrcat (char s1[], char s2[]) {
  int i,x;
  for (i = 0; s1[i]!='\0'; i++);
  for (x = 0; s2[x]!='\0'; x++) {
    s1[i+x]=s2[x];
  }
  s1[i+x]='\0';
  return s1;
}