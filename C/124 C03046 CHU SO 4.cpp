#include<stdio.h>
#include<math.h>
int ktra(int n)
{
	int m=n, dao=0, tong =0;
	while(m>0)
	{
		if(m%10==4) return 0;
		dao = dao*10 + m%10;
		tong += m%10;
		m /=10;
	}
	if(tong%10==0 && dao==n) return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int dau=pow(10,n-1);
		int cuoi=pow(10,n)-1;
		for(int i=dau;i<=cuoi;i++)
		{
			if(ktra(i)==1) printf("%d ",i);
		}
		printf("\n");
	}
}
