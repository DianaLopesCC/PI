# include <stdio.h>

int main (){
	int c;
	int m=0;
	printf("Squencia de numeros (onde o ultimo é 0)\n");
	while (c!=0){
		scanf("%d",&c);
		if (c>m){
			m=c;
		}
	}
	printf("O maior é %d\n",m);
}