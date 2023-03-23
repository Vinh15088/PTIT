#include<stdio.h>
#define dai 500
#include<string.h>
int start( char s[] ){
	for(int i=0 ; ; i++ )
		if( s[i]!=' ' )
			return i;
}
int tachtu( char s[] ,  char d[][20] ){
	int i,j=0,k=0;
	for( i=start(s) ; i<=strlen(s) ; i++ )
	{
		if( s[i]!=' ' )
			d[k][j++]=s[i];
		if( s[i]==' ' )
			d[k][j]='\0';
		if( s[i]==' ' && s[i+1]!=' ' )
		{
			j=0;
			k++;
		}
	}
	return k;
}
int trung( char d[][20] , char p[] , int n ){
	for(int i=0 ; i<n ; i++ )
	{
		if( strcmp( d[i],p )==0 )
			return 1;
	}
	return 0;
}
void count( char d[][20] , int k )
{
	int i,j,dem;
	for( i=0 ; i<=k ; i++ )
	{
		if( trung(d,d[i],i)==0 )
		{
			dem=1;
			for( j=i+1 ; j<=k ; j++ )
				if( strcmp(d[i],d[j])==0 )
					dem++;
			printf("%s %d\n",d[i],dem);
		}
	}
}
int main()
{
	char s[dai],d[100][20];
	gets(s);
	for(int i=0;i<=strlen(s);i++)
	{
      if(s[i]>=65&&s[i]<=96)
         s[i]=s[i]+32;
   	}
	int k=tachtu(s,d);  count(d,k);  return 0;
}
