#include<stdio.h>
int main()
{
	unsigned int m,n,i,j;
	scanf("%d %d",&n,&m);
	i=1;
	while(i<=m)
	{
		j=1;
		while(j<=n)
		{
			if(i==1||i==m||j==1||j==n)
				printf("*");
			else 
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
