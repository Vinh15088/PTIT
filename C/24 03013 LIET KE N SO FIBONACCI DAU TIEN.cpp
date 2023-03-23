#include<stdio.h>
void check(int n)
{
	int x[100];x[0]=0;x[1]=1;
	for(int i=2;i<100;i++)
	{
		x[i]=x[i-1]+x[i-2];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	check(n);
	return 0;
}
