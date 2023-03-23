#include<stdio.h>
#include<math.h>
main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a+=n-j;
		}
		printf("\n");
	}
}
