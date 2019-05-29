int contaPal(char s[]){
	int i, j=0, contador=0;
	if(s[0]=='\0') return 0;
	while(s[j]==' ') j++;
	for(i=j; s[i]!='\0'; i++){
		if(s[i]==' ' && s[i+1]!=' ') contador++;
	}
	if(s[i-1]==' ')return contador;
	return (contador+1);
}