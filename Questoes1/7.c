# include <stdio.h>

int qDig(unsigned int n){
	int b=0;
	while (n > 0){
		n=n/10;
		b++;
	}
	printf("Total %d\n",b);
	return b;
}

int main(){
	int total;
	qDig(1240);
}