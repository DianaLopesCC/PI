

int bitsUm (unsigned int n){
    int cont, a;
    cont = 0;
	while(n > 0){
		a = n % 2;
		n = n / 2;
		if(a == 1) cont++;
	}
	return cont;
}