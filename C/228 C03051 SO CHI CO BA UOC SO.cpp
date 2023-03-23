#include <stdio.h>
#include<math.h>
int snt(int a)
{
	if(a<2) return 0;
	int i=2;
	for(;i<=sqrt(a);i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		if(a>b)
		{
			long long tmp=a;
			a=b;
			b=a;
		}
		long long i,j;
		int count=0;
		for(i=2;i<=sqrt(b);i++)
		{
			if(snt(i))
			{
				if(i*i>=a && i*i<=b) count++;
			}
		}
		
		printf("%d\n",count);
	}
    return 0;
}
