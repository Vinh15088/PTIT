#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long a,b,c,d;
		scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		while(a!=b)
		{
			if(a>b) a=a-b;
			else b=b-a;
		}
		while(c!=d)
		{
			if(c>d) c=c-d;
			else d=d-c;
		}
		if(b==d) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
