#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int sodau,socuoi;
		socuoi=n%10;
		do
		{
			sodau=n%10;
		}
		while(n /=10);
		if(sodau==socuoi) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
