#include<stdio.h>
#include<stdbool.h>
bool thnghich(long long n)
{
	long long dao=0;
	long long m=n;
	while(m>0)
	{
		dao=dao*10 + m%10;
		m /=10;
	}
	if(dao==n) return true;
	return false;
}
bool chusole(long long n)
{
	long long tmp=n;
	while(tmp != 0)
	{
		long long k = tmp %10;
		tmp /=10;
		if(k%2!=0) return true;
	}
	return false;
}
bool tongchusole(long long n)
{
	long long s=0;
	int sotachra;
	for(;n!=0;)
	{
		sotachra=n%10;
		n/=10;
		s += sotachra;
	}
	if(s%2!=0) return true;
	return false;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(thnghich(n)==true && chusole(n)==true && tongchusole(n)==true) printf("YES");
		else printf("NO");
		printf("\n");
	}	
}
