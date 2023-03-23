#include<stdio.h>
#include<math.h>
int nt(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int b;
		long long k=1;
		scanf("%d",&b);
		int c[100],max[100];
		for(int i=1;i<=b;i++)
		{
			if(nt(i)==1)
			{
				max[i]=0;
			}
		}
		for(int i=1;i<=b;i++)
		{
			int d=i;
			for(int j=2;j<=sqrt(d);j++)
			{
				int dem=1;
				while(d%j==0)
				{
					dem++;
					d/=j;
					if(dem>max[j]) max[j]=dem;
				}
			}
			if(d>1)
			{
				if(max[d]<2) max[d]=2;
			}
		}
		for(int i=1;i<=b;i++)
		{
			if(nt(i)==1)
			{
				if(max[i]>1) k=k*pow(i,(max[i]-1));
			}
		}
		printf("%lld\n",k);
	}	
}
