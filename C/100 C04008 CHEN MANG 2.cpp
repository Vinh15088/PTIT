#include<stdio.h>

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void out(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void chen(int a[], int b[],int store[],int m,int n,int p)
{
	for(int i=0;i<n;i++)
	{
		store[i]=a[i];
	}
	for(int i=p;i<m+p;i++)
	{
		store[i]=b[i-p];
	}
	for(int i=p;i<n;i++)
	{
		store[i+m]=a[i];
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		int a[100],b[100],m,n,p,store[100];
		scanf("%d %d %d",&n,&m,&p);
		nhap(a,n);
		nhap(b,m);
		chen(a,b,store,m,n,p);
		printf("Test %d:\n",k);
		out(store,m+n);
		printf("\n");
	}
	return 0;
}

