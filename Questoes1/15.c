void truncW (char t [],int n) {
  int i=0;
  int a=0;
  int j;
  while (t[i]) {
    for (j=0; j!=n && t[i]!= ' '; j++){
      t[a++]=t[i++];
    }
    while (t[i] && i>=n && t[i]!=' ')i++;

    t[a++]=t[i++];
  }
  t[a]='\0';
}