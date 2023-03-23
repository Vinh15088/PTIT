#include<stdio.h>
int a[100],b[100],n;
void nhap()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
}
void xuat()
{
	for(int i=0;i<n;i++)
	{
		if(b[i] ==1)
		{
			b[i] =0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i]) b[j]=0;
			}
			printf("%d ",a[i]);
		}
	}
}
int main()
{
	nhap();
	xuat();
	return 0;
}
