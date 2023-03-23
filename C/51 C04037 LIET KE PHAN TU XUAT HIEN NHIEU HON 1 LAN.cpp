#include<stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int a[n],b[1000],c[1000],d[1000];
	int dem=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
		d[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		int count=1;
		if(d[i]==1)
		{
			d[i]==0;
			for(int j=i+1;j<n;j++)
			{
				if(c[i]==c[j])
				{
					count = count+1;
					d[j]=0;
				}
			}
		}
		if(count>1)
		{
			dem=dem+1;
		}
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++)
	{
		int count =1;
		if(b[i]==1)
		{
			b[i]==0;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count=count+1;
					b[j]=0;
				}
			}
		}
		if(count >1)
		{
			printf("%d ",a[i]);
		}
	}
}
