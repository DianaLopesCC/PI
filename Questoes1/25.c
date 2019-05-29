int palindroma (char s[]){
  int i, j;
  i=0;
  j=strlen(s)-1;
  while(i<j){
    if(s[i]==s[j]){
      i++;
      j--;
    }
    else return 0;
  }
  return 1;
}
