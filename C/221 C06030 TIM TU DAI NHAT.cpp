#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	char b[1000][1000],t[100];
	int i=0;
	int c[100];
	while(scanf("%s",&t)!=-1)
	{
		if( strlen(t) == 1 && t[0] =='0') break;
		strcpy(b[i],t);	
		i++;
	}
	int dem=0;
	for(int j=0;j<i;j++)
	{
			if(strlen(b[j])>dem)
			{
				dem=strlen(b[j]);
			}
	}
	char f[3]="";
	int g=0;
	for(int j=0;j<i;j++)
	{
		int dem1=1;
		if(dem==strlen(b[j]))
		{
			for(int k=j+1;k<i;k++)
			{
				if(strcmp(b[j],b[k])==0)
				{
					dem1++;
					strcpy(b[k],f);
				}
			}
			printf("%s %d %d\n",b[j],dem,dem1);
		}
	}
}
