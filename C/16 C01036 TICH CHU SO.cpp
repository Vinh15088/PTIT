#include<stdio.h>
int main()
{
	int n;
	int tich=1;
	int sotachra;
	scanf("%d",&n);
	for(;n!=0;)
	{
		sotachra = n%10;
		tich *= sotachra;
		n /= 10;
	}
	printf("%d",tich);
	return 0;
}
