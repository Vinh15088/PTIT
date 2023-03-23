#include<stdio.h>
int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		int t=1;
		for(int j=2;j<=a[i];j++)
		{
			int h=1;
			while(a[i]%j==0)
			{
				a[i]=a[i]/j;
				h=j;
			}
			t=t*h;	
		}
		printf("%d",t);
		printf("\n");
	}
}
