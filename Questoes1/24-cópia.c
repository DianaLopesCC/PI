int contida (char a[], char b[]){
  int i, j=0;
  i=0;
  j=0;
  while(a[i]!='\0' && b[j]!='\0'){
    if(a[i]==b[j]){
      i++;
      j=0;
    }
    else j++;
  }
  if(a[i]!='\0') return 0;
  return 1;
}
