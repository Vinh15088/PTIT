#include<stdio.h>
void nhap(int a[20][20], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
}
void in(int a[20][20], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void xuly(int a[20][20],int n, int m)
{
	int b[20][20], c[20][20];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			b[i][j]=a[j][i];
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;
			for(int k=0;k<m;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	in(c,n,n);
}
int main()
{
	int a[20][20],n,m,t;   scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);  nhap(a,n,m);
		printf("Test %d:\n",i);
		xuly(a,n,m);
	}
}
