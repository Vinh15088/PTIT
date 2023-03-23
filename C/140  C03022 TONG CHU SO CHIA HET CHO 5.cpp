#include<stdio.h>
int snt(long n)
{
	if(n<2)
	{
		return 0;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int chia5(long n)
{
	int s=0,sotachra;
	for(;n!=0;)
	{
		sotachra = n%10;
		n /= 10;
		s += sotachra;
	}
	if(s%5==0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long n;
	scanf("%ld",&n);
	int dem=0;
	for(int i=1;i<n;i++)
	{
		if( snt(i)==1 && chia5(i) ==1)
		{
			dem++;
			printf("%ld ",i);
		}
		
	}
	printf("\n%d",dem);
}
