#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sapxep(int a[], int n)
{
	int p=n-1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(&a[i],&a[j]);
			}
		}
		printf("Buoc %d: ",p);
		p--;
		for(int k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sapxep(a,n);
	}
}
