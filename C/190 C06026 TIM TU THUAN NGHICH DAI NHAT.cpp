#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool thuannghich(char b[30])
{
	if(strlen(b)==2 || strlen(b)==1) return true;
	else 
	{
		for(int i=0;i<=strlen(b)/2;i++)
		{
			if(b[i]!=b[strlen(b)-i-1]) return false;
		}
	return true;
	}
}
int main()
{
	char a[7000][30];
	char t[30];
	int i=0;
	while(scanf("%s",&t)!=-1)
	{
		if(strlen(t)==1 && t[0]=='0') break;
		strcpy(a[i],t);
		i++;
	}
	int dem=0;
	for(int j=0;j<i;j++)
	{
		if(thuannghich(a[j]))
		{
			if(dem<strlen(a[j]))
			{
				dem=strlen(a[j]);
			}
		}
	}
	char f[3]="";
	for(int j=0;j<i;j++)
	{
		if(thuannghich(a[j]))
		{
			int dem1=1;
			if(dem==strlen(a[j]))
			{
				for(int k=j+1;k<i;k++)
				{
					if(strcmp(a[j],a[k])==0)
					{
						dem1++;
						strcpy(a[k],f);
					}
				}
				printf("%s %d\n",a[j],dem1);
			}
		}
	}	
} 
