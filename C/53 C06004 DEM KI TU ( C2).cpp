#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[200];
	gets(s);
	int d1=0,d2=0,d3=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(isalpha(s[i])) d1++;
		else if(isdigit(s[i])) d2++;
		else d3++;
	}
	printf("%d %d %d",d1,d2,d3);
}
