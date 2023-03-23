#include<stdio.h>
#include<string.h>
int demtu(char s[])
{
	int d=0;
	char *p = strtok(s," ");
	while(p!=NULL)
	{
		d++;
		p = strtok(NULL, " ");
	}
	return d;
}
main()
{
	int t; char s[100];
	scanf("%d\n",&t);
	while(t--)
	{
		gets(s);
		printf("%d\n",demtu(s));
	}
}
