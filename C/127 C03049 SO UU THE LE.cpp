#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,chan=0,le=0;
		scanf("%lld",&n);
		if(n%2==0) printf("NO");
		else
		{
			while(n>0)
			{
				int a=n%10;
				n /= 10;
				if(a%2==0) chan++;
				else le++;
			}
			if(chan>le) printf("NO");
			else printf("YES");
		}
		printf("\n");
	}
}
