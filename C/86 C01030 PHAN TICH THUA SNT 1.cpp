#include<stdio.h>
void check(long n)
{
	long i=2;
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d ",i);
			n /=i;
		}
	}
	printf("\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long n;
		scanf("%ld",&n);
		check(n);
	}
	return 0;
}
