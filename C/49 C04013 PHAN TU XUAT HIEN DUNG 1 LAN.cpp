#include<stdio.h>
int a[100],b[100],n;
void in()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void check()
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(b[a[i]] == 1) dem++;
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]==1) printf("%d ",a[i]);
	}
}
int main()
{
	in();
	check();
}
