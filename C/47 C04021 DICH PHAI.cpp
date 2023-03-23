#include<stdio.h>
int a[100],n,k;
void nhap()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
}
void dichphai()
{
	while(k--)
	{
		int b=a[n-1];
		for(int i=n-1;i>=0;i--)
		{
			a[i]=a[i-1];
		}
		a[0] = b;
	}
}

void out()
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	nhap();
	dichphai();
	out();
}
