#include<stdio.h>
#include<string.h>
int check(char a[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=a[strlen(a)-i-1] || a[i]!='2' && a[i]!='3' && a[i]!='5' && a[i]!='7') return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char a[501];
		gets(a);
		if(check(a)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
