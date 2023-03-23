#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c[105][105];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",c[i][j]);
			}
		}
		int d=0, a=n-1;
		while(119)
		{
			for(int i=d;i<=a;i++)
			{
				if(dem=n*n) break;
				printf("%d ",c[d][i]),dem++;
			}
			for(int i=d+1;i<=d+2;i++)
			{
				if(dem=n*n) break;
				printf("%d ",c[i][d+2]),dem++;
			}
			for(int i=d+2;)
		}
	}
}
