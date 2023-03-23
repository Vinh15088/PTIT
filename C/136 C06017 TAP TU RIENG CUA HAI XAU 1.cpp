#include<stdio.h>
#include<string.h>
char ds1[100][50], ds2[100][50];   int n1=0,n2=0;
int tim(char s[],char ds[100][50], int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(s,ds[i]) == 0) return i;
	}
	return -1;
}
void tach1(char s[])
{
	char *p = strtok(s, " ");
	while(p != NULL)
	{
		int t=tim(p,ds1,n1);
		if(t==-1)
			strcpy(ds1[n1],p); n1++;
		p = strtok(NULL, " ");
	}
}
void tach2(char s[])
{
	char *p = strtok(s," ");
	while( p != NULL)
	{
		int t=tim(p,ds2,n2);
		if(t==-1)
			strcpy(ds2[n2],p); n2++;
		p=strtok(NULL," ");
	}
}
void sapxep(char ds[100][50],int n)
{
	int i,j; char tmp[50];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(ds[i],ds[j])>0)
			{
				strcpy(tmp,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],tmp);
			}
		}
	}
}
main()
{
	char s1[200] , s2[200];
	gets(s1); gets(s2);
	tach1(s1); tach2(s2);
	sapxep(ds1,n1);
	for(int i=0;i<n1;i++)
	{
		if(tim(ds1[i], ds2,n2)==-1) printf("%s ",ds1[i]);
	}
}
