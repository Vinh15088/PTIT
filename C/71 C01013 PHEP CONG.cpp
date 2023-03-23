#include<stdio.h>
int main()
{
	char s[10];
	gets(s);
	int a,b,c;
	a=s[0]-36;
	b=s[3]-36;
	c=s[6]-36;
	if(a+b==c)
		printf("YES");
	else
		printf("NO");
	return 0;
	
}
