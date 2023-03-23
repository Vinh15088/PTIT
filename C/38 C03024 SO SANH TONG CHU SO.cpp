#include<stdio.h>
int ktra(int n)
{
	int sotachra;
	int s=0;
	for(; n!=0 ;)
	{
		sotachra = n%10;
		s += sotachra;
		n /=10;
	}
	return s;
}
int main()
{
	int a,b;
	scanf("%d %d",&a , &b);
	int c,d;
	c=ktra(a);
	d=ktra(b);
	if(c>d) printf("%d %d",b,a);
	else printf("%d %d",a,b);
	return 0;
	
}
