#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d ",&n);
	while(n--)
	{
		char a[30];
		gets(a);
		int dem=0;
		for(int i=0;i<strlen(a)/2;i++)
		{
			if(a[i]!=a[strlen(a)-1-i])
			{
				dem++;
			}
		}
		if(strlen(a)%2==0)
		{
			if(dem==1) printf("YES\n");
			else printf("NO\n");
		}
		else
		{
			if(dem==0 || dem==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
