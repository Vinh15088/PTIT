#include<stdio.h>
int snt(int n)
{
	if(n<2) return 1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	int a[105],b[105],count=0;
	for(int i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		if(snt(a[i])==0)
		{
			b[count]=a[i];
			count++;
		}
	}
	printf("%d ",count);
	for(int i=0;i<count;i++)
	{
		printf("%d ",b[i]);
	}
}
