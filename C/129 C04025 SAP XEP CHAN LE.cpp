#include<stdio.h>
int main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp;
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 ==0) printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 !=0) printf("%d ",a[i]);
	}
	return 0;
}
