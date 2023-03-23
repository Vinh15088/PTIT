#include<stdio.h>
int main()
{
	int a[100],n,i,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{			
			if(a[i]<a[j])
			{
				c=a[i];				
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	if(n>2)
	{
		for(i=1;i<n;i++)
		{
		    if(a[0]>a[i])
			{
		    	printf("%d %d",a[0],a[i]);
		    	break;
			}
		}
	}
}
