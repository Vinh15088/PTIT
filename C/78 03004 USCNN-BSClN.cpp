#include<stdio.h>
int UCNN(long long a, long b)
{
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
void BCNN(long long a, long b)
{
	long long Uoc, Boi;
	Uoc = UCNN(a,b);
	Boi = a*b;
	printf("%lld\n%lld",Uoc, Boi/Uoc);
}
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	BCNN(a,b);
}
