#include<stdio.h>
#include<string.h>
int kt(char s[])
{
	int d=0, c=strlen(s)-1;
	while(d<c)
	{
		if(s[d] != s[c]) return 0;
		int t=s[d];
		if( t%2!=0) return 0;
		d++; c--;
	}
	return 1;
}
int main()
{
	int t;
	char s[500];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		printf(kt(s) ? "YES\n" : "NO\n");
	}
}
