#include<stdio.h>
void in( int a[20][20], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void check(int a[20][20] , int n, int m, int c, int d)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==c-1) printf("%d ", a[d-1][j]);
			else if(i==d-1) printf("%d ", a[c-1][j]);
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[20][20],n,m,c,d;
	scanf("%d %d",&n,&m);
	in(a,n,m);
	scanf("%d %d",&c,&d);
	check(a,n,m,c,d);
}
