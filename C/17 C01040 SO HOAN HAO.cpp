#include<stdio.h>
int main()
{
	int n, tong =0,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			tong=tong+i;
		}
	}
	if(tong==n)
	{
		printf("1",n);
	}
	else
	{
		printf("0",n);
	}
	return 0;
}
