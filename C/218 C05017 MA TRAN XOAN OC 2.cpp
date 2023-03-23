#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,c[100][100];
		scanf("%d%d",&a,&b);
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				scanf("%d",&c[i][j]);
			}
		}
		int d=0,hang=a-1,cot=b-1;
		int dem=0;
		while(119)
		{
			for(int i=d;i<=cot;i++)
			{
				if(dem==a*b) break;
				printf("%d ",c[d][i]),dem++;
			}
			for(int i=d+1;i<=hang;i++)
			{
				if(dem==a*b) break;
				printf("%d ",c[i][cot]),dem++;
			}
			for(int i=cot-1;i>=d;i--)
			{
				if(dem==a*b) break;
				printf("%d ",c[hang][i]),dem++;
			}
			for(int i=hang-1;i>d;i--)
			{
				if(dem==a*b) break;
				printf("%d ",c[i][d]),dem++;
			}
			if(dem==a*b) break;
			d++,hang--,cot--;
		}
		printf("\n");
	}
}
