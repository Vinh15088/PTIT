#include<stdio.h>
#define max 500
#include<string.h>

int dau( char s[] )
{
	int i;
	for( i=0 ; ; i++ )
		if( s[i]!=' ' )
			return i;
}

void tach( char s[] , char d[][20] )
{
	int i,j=0,k=0;
	for( i=dau(s) ; i<=strlen(s) ; i++ )
		if( s[i]>=65 && s[i]<=90 )
			s[i]+=32;
	for( i=dau(s) ; i<=strlen(s) ; i++ )
	{
		if( s[i]!=' ' )
			d[k][j++]=s[i];
		if( s[i]==' ' || s[i]=='\0' )
			d[k][j]='\0';
		if( s[i]==' ' && s[i+1]!=' ' )
		{
			j=0;k++;
		}
	}
	for( i=0 ; i<k ; i++ )
		printf("%c",d[i][0]);
	printf("%s@ptit.edu.vn",d[k]);
}

int main()
{
	char s[max],d[10][20];
	gets(s);
	tach(s,d);
 	return 0;
}
