# include <stdio.h>

int cardinalMSet (int N, int v[N]){
	int c=0;
	int i;
	for (i=0;i<N;i++){
		c=c+v[i];
	}
	printf("Total %d\n",c);
	return c;
}

int main (){
	int total;
	int v[]={0,3,0,0,3};
	total=cardinalMSet(5,v);
}