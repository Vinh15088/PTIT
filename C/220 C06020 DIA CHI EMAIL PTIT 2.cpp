#include<stdio.h>
#include<string.h>
#include<ctype.h>
char email[50][20]; int t;
void xuly(char s[], int dem)
{
	char ds[50][50];
	char add[50]="";
	int n=0,i,j;
	char *p=strtok(s," ");
	while(p!=NULL)
	{
		for(i=0;i<strlen(p);i++) p[i]=tolower(p[i]);
		strcpy(ds[n],p);
		n++;
		p=strtok(NULL," ");
	}
	strcat(add,ds[n-1]);
	for(i=0;i<n-1;i++) strncat(add,ds[i],1);
	strcpy(email[dem],add);
}
void inkq()
{
	int i,d,j;
	for(i=0;i<t;i++)
	{
		printf("%s",email[i]);
		d=0;
		for(j=i;j>=0;j--)
			if(strcmp(email[i],email[j])==0) d++;
		if(d>1) printf("%d",d);
		printf("@ptit.edu.vn\n");
	}
}
main()
{
	char s[100],tmp[10];
	scanf("%d",&t);
	gets(tmp);
	for(int i=0;i<t;i++)
	{
		gets(s);
		xuly(s,i);
	}
	inkq();
}
