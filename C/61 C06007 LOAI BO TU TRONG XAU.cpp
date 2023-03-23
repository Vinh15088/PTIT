#include<stdio.h>
#include<string.h>
int main()
{
	char ds[100][50] , s[50] ;
	int n=0;
	while(scanf("%s",&s) != -1)
	{
		strcpy(ds[n] , s);
		n++;
	}
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(ds[n-1],ds[i]) != 0) printf("%s ",ds[i]);
	}
}
