#include<stdio.h>
#include<math.h>
int thuannghich(int n)
{
	int m=n,dao=0;
	while(m>0)
	{
		dao = dao*10 + m%10;
		m/=10;
	}
	if(dao==n) return 1;
	else return 0;
}
int tongchuso(int n)
{
	int tong=0;
	while(n!=0)
	{
		tong += n%10;
		n/=10;
	}
	if(tong%10 == 0) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,dem=0;
		scanf("%d",&n);
		int dau=pow(10,n-1);
		int cuoi=pow(10,n)-1;
		for(int i=dau;i<=cuoi;i++)
		{
			if(thuannghich(i)==1 && tongchuso(i)==1) dem++;
		}
		printf("%d\n",dem);
	}
}
