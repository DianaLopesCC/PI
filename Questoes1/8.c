int mystrlen (char str []){
	int n=0;
	int i=0;
	while (str[i] != '\0'){
		n++;
		i++;
	}
	return n;
}