#include<stdio.h>
#include<string.h>
int ktra(char a[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if( a[i]!='0' && a[i]!='6' && a[i]!='8')
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[10];
		scanf("%s",&a);
		printf(ktra(a) ? "YES\n" : "NO\n");
	}
	return 0;
}
