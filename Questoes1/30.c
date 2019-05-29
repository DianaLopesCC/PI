int crescente (int a[], int i, int j){
	int r=1;
	for(;(i+1)<=j;i++){
		if (a[i]>a[i+1]){
			r=0;		}
	}
	return r;
}