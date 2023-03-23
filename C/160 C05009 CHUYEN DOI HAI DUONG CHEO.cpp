#include<stdio.h>
void nhap(int a[20][20], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[20][20], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j) printf("%d ",a[i][n-i-1]);
			else if(j==n-i-1) printf("%d ",a[i][i]);
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[20][20], n;
	scanf("%d",&n);
	nhap(a,n);
	in(a,n);
}
