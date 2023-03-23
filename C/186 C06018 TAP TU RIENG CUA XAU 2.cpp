#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d ",&n);
	while(n--)
	{
		char a[200],b[200];
		gets(a),gets(b);
		char c[200][200],d[200][200];
		int s1=0,s2=0,s3=0,s4=0,dem=0,dem1=0;
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]!=' ' && a[i]!='\t')
			{
				c[s1][s2]=a[i];
				s2++;
				dem++;
			}
			else if((a[i]==' ' || a[i]=='\t')&& (a[i+1]!=' ' && a[i+1]!='\t')&&dem>=1)
			{
				c[s1][s2]=0;
				s1++;
				s2=0;
			}	
	    }
	    char t[200];
	    for(int i=1;i<=s1;i++)
	    {
	    	for(int j=1;j<=s1;j++)
	    	{
	    		if(strcmp(c[j-1],c[j])>0)
	    		{
	    			strcpy(t,c[j-1]);
	    			strcpy(c[j-1],c[j]);
	    			strcpy(c[j],t);
				}
			}
		}
	    for(int i=0;i<strlen(a);i++)
		{
			if(b[i]!=' ' && b[i]!='\t')
			{
				d[s3][s4]=b[i];
				s4++;
				dem1++;
			}
			else if((b[i]==' ' || b[i]=='\t')&& (b[i+1]!=' ' && b[i+1]!='\t')&&dem1>=1)
			{
				d[s3][s4]=0;
				s3++;
				s4=0;
			}
		}
		for(int i=0;i<=s1;i++)
		{
			int kq=1;
			for(int j=i-1;j>=0;j--)
			{
				if(strcmp(c[i],c[j])==0)
				{
					kq=0;
					break;
				}
			}
			if(kq==1)
			{
				int check=1;
				for(int k=0;k<=s3;k++)
				{
					if(strcmp(c[i],d[k])==0)
					{
						check=0;
						break;
					} 
				}
				if(check==1) printf("%s ",c[i]);
			}
		}
		printf("\n");	
    }
} 
