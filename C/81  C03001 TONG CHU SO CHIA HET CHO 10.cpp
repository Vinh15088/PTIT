#include<stdio.h>
int ktra(int n)
{
	int sotachra;
	int s=0;
	for(;n!=0;)
	{
		sotachra=n%10;
		s += sotachra;
		n /=10;
	}
	if(s % 10 !=0) return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ktra(n);
		printf(ktra(n) ? "YES\n" : "NO\n");
	}
	return 0;
}
