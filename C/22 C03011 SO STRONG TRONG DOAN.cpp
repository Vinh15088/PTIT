#include<stdio.h>
int giaithua(int n)
{
	if(n==1 || n==0) return 1;
	else return n*giaithua(n-1);
}
int soStrong(int n)
{
	int m=n,tong=0;
	while(n>0)
	{
		int a=n%10;
		tong += giaithua(a);
		n/=10;
	}
	if(tong==m) return 1;
	else return 0;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n>m)
	{
		int tmp=n;
		n=m;
		m=tmp;
	}
	for(int i=n;i<=m;i++)
	{
		if(soStrong(i)==1) printf("%d ",i);
	}
}
