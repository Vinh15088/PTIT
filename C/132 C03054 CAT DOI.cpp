#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void khoitao(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='8') s[i]='0';  if(s[i]=='9') s[i]='0';
	}
}
int kiemtra1(char s[])
{
	
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7') return 0;
		
	}
	return 1;
}
int kiemtra2(char s[])
{
	int g=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='0') g++;
		
	}
	if(strlen(s)==g) return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("\n");
		char s[20];
		gets(s);
		khoitao(s);
		if(kiemtra1(s)==0||kiemtra2(s)==0) printf("INVALID");
		else 
		{	
			for(int i=0;i<strlen(s);i++)
			{
				if(s[i]!='0')
				{
						for(int j=i;j<strlen(s);j++)
						{
							printf("%c",s[j]);
						}
						break;
				}
			}
		}
		printf("\n");
	}
	return 0;
} 
