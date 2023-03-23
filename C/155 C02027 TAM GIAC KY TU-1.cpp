#include<stdio.h>
int main()
{
	int n,a,c=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a+=i ;int b=a;
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)
			{
				printf("%c ",b+96);
				c++;
				b--;
			}
		}
		else
		{
			for(int j=1;j<=i;j++)
			{	
				printf("%c ",c+96);
				c++;	
			}
		}
		printf("\n");
	}
	return 0;
}
