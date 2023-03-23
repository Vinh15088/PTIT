#include <stdio.h>
int kt_thuannghich(long long n)
	{	
		long long somoi=0;
		long long m=n;
		while(m>0)
		{
			somoi=somoi*10+m%10;
			m/=10;
		}
		if(somoi==n) return 1;
		return 0;
	}
int tongcuoi8(long long n)
	{	int sum=0;
		long long m=n;
		while(m>0)
		{ 
			sum=sum+m%10;
			m/=10;
		}
		if(sum%10==8) return 1;
		return 0;
	}
int coso6(long long n)
	{
		long long m=n;
		while(m>0)
		{
			if(m%10==6) return 1;
			m/=10;
		}
		return 0;
	}		
int main ()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(a<b)
	{
		for(long long i=a;i<=b;i++)
		{
			if(kt_thuannghich(i))
			{	
				if(coso6(i))
				{	
					if(tongcuoi8(i))	
					{
						printf("%lld ",i);
					}
				}
			}
		
		}
	}
	else 
	{
		for(long long i=b;i<=a;i++)
		{
			if(kt_thuannghich(i))
			{
				if(coso6(i))
				{	
				if(tongcuoi8(i))
				{
					printf("%lld ",i);}
				}
			}
		}
	}
}
