#include<stdio.h>
#include<string.h>
int check(char a[])
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
				if(a[i]>a[j]) return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char a[20];
		gets(a);
		if(check(a)==1) printf("YES\n");
		else printf("NO\n");
	}
}
