#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		int check=1;
		while(n>0)
		{
			int a= n%10;
			n /= 10;
			if(a%2!=0) 
			{
				check = 0;
				break;
			}
		}
		if( check==1 ) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
