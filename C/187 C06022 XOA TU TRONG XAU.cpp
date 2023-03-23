#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d ",&n);
	for(int i=1;i<=n;i++)
	{
		char a[200],b[20];
		char h[200];
		gets(a),gets(b);
		strcpy(h,a);
		for(int j=0;j<strlen(b);j++)
		{
			if(b[j]>='A' && b[j]<='Z') b[j]=b[j]+32;
		}
		for(int j=0;j<strlen(a);j++)
		{
			if(a[j]>='A' && a[j]<='Z') a[j]=a[j]+32;
		}
		int s1=0,s2=0,s3=0,s4=0;
		char c[100][100],d[100][100];
		for(int k=0;k<strlen(a);k++)
		{
			if(a[k]!=' ')
			{
				c[s1][s2]=a[k];
				s2++;
			}
			else
			{
				c[s1][s2]=0;
				s1++;
				s2=0;
			}
		}
		for(int k=0;k<strlen(h);k++)
		{
			if(h[k]!=' ')
			{
				d[s3][s4]=h[k];
				s4++;
			}
			else
			{
				d[s3][s4]=0;
				s3++;
				s4=0;
			}
		}
		printf("Test %d: ",i);
		for(int j=0;j<=s1;j++)
		{
			if(strcmp(c[j],b)!=0) printf("%s ",d[j]);
		}
		printf("\n");
	} 
} 
