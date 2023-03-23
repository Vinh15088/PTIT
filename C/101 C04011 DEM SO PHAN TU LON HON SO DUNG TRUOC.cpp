#include<stdio.h>
int kt(int a[],int n,int i)
{
	for(int j=i-1;j>=0;j--)
	{
		if(a[j]>=a[i]) return 0;
	}
	return 1;
}
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int dem(int a[],int n)
{
	int d=1,i,j;
	for(i=1;i<n;i++)
	{
		if(kt(a,n,i)) d++;
	}
	return d;
}
int main()
{
	int t,a[100],n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		nhap(a,n);
		printf("%d\n",dem(a,n));
	}
}
