#include<stdio.h>
long long check(int n,int k)
{
	long long res=1;
	for(int i=1;i<=k;i++,n--)
	{
		res = res * n/i;
	}
	return res;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j<i;j--) printf(" ");
		for(int j=0;j<=i;j++)
		{
			printf("%d ",check(i,j));
		}
		printf("\n");
	}
}
