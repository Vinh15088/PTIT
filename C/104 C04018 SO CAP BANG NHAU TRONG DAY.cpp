#include<stdio.h>

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int dem=0;
		for(int i=1;i<n;i++)
		{
		     if(a[i]==a[i-1])
			 {
			 	dem++;
			 }
		}
		printf("%d\n",dem);
	}
}
