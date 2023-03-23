#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		int sotachra;
		int s=0;
		scanf("%d",&n);
		for(;n!=0;)
		{
			sotachra=n%10;
			s=s+sotachra;
			n/=10;
		}
		printf("%d\n",s);
	}
	return 0;
}
