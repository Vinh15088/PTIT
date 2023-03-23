#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=1;
	for(int i=1;i<=a;i++)
	{
		
		for(int i=1;i<=n;i+=2)
		{
			printf("%c",i+63);
		}
		for(int j=n-2;j>=1;j-=2)
		{
			printf("%c",j+63);
		}
		n+=2;
		printf("\n");
	}
	return 0;
}
