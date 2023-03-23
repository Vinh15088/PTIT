#include<stdio.h>
int main()
{
	int n;   scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		int a,b;   scanf("%d %d",&a,&b);   int c[20][20];
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++) scanf("%d",&c[i][j]);
		}
		int i=1,j=1,d=-1,f=-1,sums=0,sumsss=0;
		while(i<=a)
		{
			int sum=0;
			for(int j=1;j<=b;j++) sum=sum+c[i][j];
			if(sum>sums)
			{
			    d=i;
			    sums=sum;
			}	
			i++;
		}
		while(j<=b)
		{
			int sumss=0;
			for(int i=1;i<=a;i++) 
			{
				if(i==d) sumss=sumss+0;
				else sumss=sumss+c[i][j];
			}
			if(sumss>sumsss)
			{
			    f=j;
			    sumsss=sumss;
			}
			j++;
		}
		printf("Test %d:\n",k);
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				if(i==d) break;
				else if(j!=f) printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}
