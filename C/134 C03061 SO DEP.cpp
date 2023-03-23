#include<stdio.h>
#include<math.h>
long long gapdoi(long long n)
{
	long long a=n%10;
	while(n>9)
	{
		n/=10;
	}
	if(n*2==a||a*2==n) return 1;
	return 0;
}
long long thuannghich(long long n)
{
	long long a=n/10;
	long long b=n/10;
	int dem=0;
	while(a>0)
	{
		a/=10;
		dem++;
	}
	long long p=pow(10,dem-1);
	long long c=b%p;
	long long h=c;
	long long dao=0;
	while(c>0)
	{
		dao = dao*10 +c%10;
		c/=10;
	}
	if(dao==h) return 1;
	return 0;
}
	
int main()
{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			long long n;
			scanf("%lld",&n);
			if(gapdoi(n) && thuannghich(n)) printf("YES\n");
			else printf("NO\n");
		}
		return 0;
} 
