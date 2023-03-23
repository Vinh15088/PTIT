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
void dichtrai()
{
	while(k--)
	{
		int b=a[0];
		for(int i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1] = b;
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
	dichtrai();
	out();
}
