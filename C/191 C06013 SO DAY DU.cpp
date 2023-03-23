#include<stdio.h>
#include<string.h>
#include<ctype.h>
int test(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if((!(isdigit(a[i])) || a[0]=='0')) return 0;
	}
	return 1;
}
int cs0(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='0') return 1;
	}
	return 0;
}
int cs1(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='1') return 1;
	}
	return 0;
}
int cs2(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='2') return 1;
	}
	return 0;
}
int cs3(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='3') return 1;
	}
	return 0;
}
int cs4(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='4') return 1;
	}
	return 0;
}
int cs5(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='5') return 1;
	}
	return 0;
}
int cs6(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='6') return 1;
	}
	return 0;
}
int cs7(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='7') return 1;
	}
	return 0;
}
int cs8(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='8') return 1;
	}
	return 0;
}
int cs9(char a[1005])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='9') return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[1005];
		gets(a);
		if(!test(a)) printf("INVALID");
		else
		{
			if(cs0(a) && cs1(a) && cs2(a) && cs3(a) && cs4(a) && cs5(a) && cs6(a) && cs7(a) && cs8(a) && cs9(a)) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
}

