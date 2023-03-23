#include<stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n,int m)
{
	int test;
	int min,max;
	int sum,a,b,count=0,fibo[100];
	m>n ? (max=m,min=n) : (min=m,max=n);
	fibo[0]=0,fibo[1]=1;
	for(int i=2;i<1000;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(int i=min;i<=max;i++)
	{
		if(snt(i)==0) continue;
		test=0; sum=0; a=i;
		while(a!=0)
		{
			b = a%10;
			sum +=b;
			a /=10;
		}
		for(int k=0;k<1000;k++)
		{
			if(sum==fibo[k])
			{
				test=1;
				break;
			}
		}
		if(test==1) printf("%d ",i);
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	check(n,m);
	return 0;
}
