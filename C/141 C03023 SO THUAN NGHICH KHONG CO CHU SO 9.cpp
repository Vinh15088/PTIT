#include<stdio.h>
#include<stdbool.h>
bool sothnghich(long n)
{
	long dao=0;
	long m=n;
	while(m>0)
	{
		dao = dao*10 + m%10;
		m /= 10;
	}
	if(dao == n) return true;
	return false;
}
bool loaiso9(long n)
{
	while(n>0)
	{
		int k=n%10;
		n /= 10;
		if(k==9) return false;
	}
	return true;
}
int main()
{
	long n;
	scanf("%ld",&n);
	long dem=0;
	for(int i=2;i<n;i++)
	{
		if(sothnghich(i) && loaiso9(i))
		{
			dem++;
			printf("%ld ",i);
		}
	}
	printf("\n%ld",dem);
}
