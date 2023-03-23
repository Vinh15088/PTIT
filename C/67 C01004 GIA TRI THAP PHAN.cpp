#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long a;
		scanf("%ld",&a);
		double s=(double)1/a;
		printf("%.15lf\n",s);
	}
	return 0;
}
