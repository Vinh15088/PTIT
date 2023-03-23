#include<stdio.h>
int check(long long n)
{
	long long f0=0,f1=1;
	if(n==f0 || n==f1) return 1;
	long long fn = f0+f1;
	while(fn <= n)
	{
		fn = f0 + f1;
		if(fn == n) return 1;
		f0 = f1;
		f1 = fn;
	}
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
		if(check(n)==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
