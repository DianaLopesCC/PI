# include <stdio.h>

int main(){
	int c,m2;
	int m1=0;
	printf("Sequencia pretendida(com fim no 0)\n");
	while(c!=0){
		scanf("%d",&c);
		if (c>m1){
			m2=m1;
			m1=c;
		}
	}
	printf("O segundo maior é %d\n",m2);
}