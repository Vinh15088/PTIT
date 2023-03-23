#include<stdio.h>
int main()
{
	int a,b,tong=0;
	int min,max;
	scanf("%d %d",&a, &b);
	a>b ? (max=a,min=b) : (max=b,min=a);
	for(int i=min;i<=max;i++)
	{
		tong +=i;
	}
	printf("%d", tong);
	return 0;
}
