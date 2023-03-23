#include<stdio.h>
long long tonguoc(int a)
{
	long long tong=0;
	while(a%2 == 0)
	{
		tong += 2;
		a /= 2;
	}
	for(int i=3;i*i<=a;i += 2)
	{
		while(a%i == 0)
		{
			tong += i;
			a /= i;
		}
	}
	if(a>1) return tong+a;
	return tong;
}
int main()
{
	int t;
	scanf("%d",&t);
	long long sum = 0;
	while(t--)
	{
		int a;
		scanf("%d",&a);
		sum += tonguoc(a);
	}
	printf("%lld",sum);
}
