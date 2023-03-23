#include<stdio.h>
int a[100];
int n;

void nhap()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void dem()
{
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	nhap();
	dem();
	return 0;
}
