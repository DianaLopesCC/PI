int remRep (char x[]){
	int r, w=0;
	for(r=0; x[r]!='\0'; r++){
		if(x[r]!=x[r+1]){
			x[w]=x[r];
			w++;
		}
	}
	x[w]='\0';
	return strlen(x);
}