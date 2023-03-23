#include<stdio.h>
int kiemtra(int n)
{
	int sum=0,a;
	while(n>0)
	{
		a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
}
int tongchusoNT(int n)
{
	int sum1=0;
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			n=n/i;
			sum1 += kiemtra(i);
		}
	}
	return sum1;
}
int main()
{
	int a;
	scanf("%d",&a);
	if(kiemtra(a)==tongchusoNT(a)) printf("YES\n");	
	else printf("NO\n");
	return 0;
}
