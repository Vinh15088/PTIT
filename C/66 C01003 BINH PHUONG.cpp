#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long a;
		scanf("%ld",&a);
		printf("%ld\n",a*a);
	}
	return 0;
}
