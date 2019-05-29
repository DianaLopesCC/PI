int trailingZ (unsigned int n){
	//int  a[32]
	int a=0;
	int i;
	for (i=0;i<32;i++){
		if( n%2 == 0){
			a++;
		}
		else break;
		n=(n/2);
	}
	return a;
}
