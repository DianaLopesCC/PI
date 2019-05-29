void merge (int r[], int a[], int b[], int na, int nb){
  int i, j, n;
  i=0;
  j=0;
  for(n=0; n!=(na+nb); n++){
    if(j==na){
      r[n]=b[i];
      i++;
    }
    else{
      if(i==nb){
        r[n]=a[j];
        j++;
      }
      else{
        if(a[j]<b[i]){
          r[n]=a[j];
          j++;
        }
        else{
          r[n]=b[i];
          i++;
        }
      }
    }
  }
}
