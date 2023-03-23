#include<stdio.h>
#include<math.h>
int kgiam(long long a)
{
	while(a>0)
	{
		int x = a%10;
		a/=10;
		if(x < a%10) return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		int c = pow(10,a-1);
		int d = pow(10,a)-1;
		for(long long i=c;i<=d;i++)
		{
			if(kgiam(i)==1) printf("%lld ",i);
		}
		printf("\n");
	}
}
