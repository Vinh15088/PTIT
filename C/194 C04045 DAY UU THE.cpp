#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a;
		int size = 0, even = 0,odd = 0;
		do
		{
			int n;
			scanf("%d",&n);
			if(n % 2 == 0) even++;
			else odd++;
			size++;
		} 
		while(getchar() != '\n');
		if(size % 2 == 0 && even > odd)
		{
			printf("YES\n");
		}
		else if(size % 2 != 0 && even < odd)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
} 
