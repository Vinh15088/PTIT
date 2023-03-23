#include<stdio.h>
int check(long n)
{
	int dem=0;
	while(n>0)
	{
		long k=n%10;  n /= 10;
		if(k != 2 && k!= 3 && k!=5 && k!= 7) dem++;
	}
	if( dem==0 ) return 1;
	return 0;
}
int sochuso(long n)
{
	int tong=0;
	while(n>0)
	{
		long k=n%10;  n /= 10;
		tong += k;
	}
	for(int i=2;i*i<=tong;i++)
	{
		if(tong%i==0) return 0;
	}
	return 1;
}
int snt(long n)
{
	if(n<2) return 0;
	for(long i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int t; scanf("%d",&t);
	while(t--)
	{
		long a,b;
		long dem=0;
		scanf("%ld %ld",&a,&b);
		for(long i=a;i<=b;i++)
		{
			if( sochuso(i)==1 && check(i)==1 && snt(i)==1) dem++;
		}
		printf("%d\n",dem);
	}
}
