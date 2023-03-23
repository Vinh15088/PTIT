#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	int max=65;
	for( i=1 ; i<=n ; i++ ){
		char t=max;
		for( j=1 ; j<=n-i+1 ; j++ ){
			printf("%c",t);
			t=t+2;
		}
		printf("\n");
		max+=2;
	}
	return 0;
}
