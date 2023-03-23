#include<stdio.h>
int main()
{
	int n;
	int sotachra;
	int s=0;
	scanf("%d",&n);
	for(;n!=0;)
	{
	sotachra=n%10;
	s += sotachra;
	n/=10;}
	printf("%d",s);
	
	return 0;
}
