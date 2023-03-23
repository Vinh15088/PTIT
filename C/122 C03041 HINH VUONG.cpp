#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long a,b,c,d;
		scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		if(c-a == d-b)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
