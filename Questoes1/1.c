# include <stdio.h>

int main () {
	int i=0;
	int c=1;
	printf("Digite um numero (0 corresponde ao fim)\n"); 
	while (c!=0){
		scanf ("%d",&c);
		i=i+c;
		}
	printf("A soma dos numeros e %d\n\n",i);
	return i;
}