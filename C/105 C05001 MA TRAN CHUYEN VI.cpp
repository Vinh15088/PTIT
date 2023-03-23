#include<stdio.h>
void nhap(int a[20][20], int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void chuyenvi(int a[20][20], int n,int m)
{
	int b[20][20],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[20][20],n,m;
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	chuyenvi(a,n,m);
}
