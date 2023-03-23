#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuly(int a[],int n)
{
	int b[100]={0},i,j;
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i]);
				{
					b[i]++;
					b[j]=-1;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i] != -1) printf("%d %d\n",a[i],b[i]);
	 } 
}
int main()
{
	int n,a[100];
	scanf("%d",&n);
	nhap(a,n);
	xuly(a,n);
}
