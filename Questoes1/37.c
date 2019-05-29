int comunsOrd (int a[], int na, int b[], int nb){
  int i=0, j=0, c=0;
  while(i<na && j<nb){
    if(a[i]==b[j]){
      c++;
      j++;
      i++;
    }
    else{
      if(b[j]<a[i]) j++;
      else i++;
    }
  }
  return c;
}
