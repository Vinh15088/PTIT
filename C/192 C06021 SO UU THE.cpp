#include<stdio.h>
#include<string.h>
#include<ctype.h>
int kt(char s[]) 
{
	for(int i=0;i<strlen(s);i++) 
	{
		if((!(isdigit(s[i])) || s[0]=='0')) return 0;
	}
	return 1;
}

int kt1(char s[]) 
{
	int d=0, c=0;
	int x=strlen(s);
	for(int i=0;i<x;i++) 
	{
		if(s[i]%2==0) c++;
		else d++;
	}
	if((c>d && x%2==0) || (c<d && x%2!=0)) return 1;
	else return 0;
}

int main () 
{
	int t;
	char s[1005];
	scanf("%d",&t);
	while(t--) 
	{
		scanf("\n");
		gets(s);
		int x=strlen(s);
		if(kt(s)==0) printf("INVALID\n");
		else 
		{
			if(kt1(s)==1) printf("YES\n");
			else printf("NO\n");
		}
	}

}
