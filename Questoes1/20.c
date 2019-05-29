int maiorSufixo(char s1[], char s2[]){
  int contador=0, t1, t2;
  t1=strlen(s1)-1;
  t2=strlen(s2)-1;
  while(s1[t1--]==s2[t2--])contador++;
  return contador;
}