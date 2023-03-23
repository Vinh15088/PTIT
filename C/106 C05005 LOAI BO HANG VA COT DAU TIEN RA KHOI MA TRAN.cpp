#include<stdio.h>
void nhap(int a[20][20],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void check(int a[20][20],int n,int m)
{
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int a[20][20];
		int n,m;
		scanf("%d %d",&n,&m);
		nhap(a,n,m);
		printf("Test %d:\n",i);
		check(a,n,m);
	}
}
