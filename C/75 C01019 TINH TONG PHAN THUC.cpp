#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	double s=0;
	for(i=1;i<=n;i++)
	{
	s += (1.0)*1/i;
	}
	printf("%.4f",s);
	return 0;
}
