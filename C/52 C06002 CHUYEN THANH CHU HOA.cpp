#include<stdio.h>
#include<string.h>
#include<ctype.h>
void upperCase(char *c)
{
	int i;
	int size = strlen(c);
	for(int i=0;i< size;i++)
	{
		c[i] = toupper(c[i]);
	}
	printf("%s",c);
}
int main()
{
	char x[100];
	fgets(x,99,stdin);
	upperCase(x);
	return 0;
}
