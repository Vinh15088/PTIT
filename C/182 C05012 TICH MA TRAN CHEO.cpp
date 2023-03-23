#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a,b[100][100];
		scanf("%d",&a);
		for(int j=1;j<=a;j++)
		{
			int h=1;
			for(int k=1;k<=a;k++)
			{
				if(h>j)
				{
					for(int g=1;g<=a-j;g++) b[j][k]=0;
				}
				else b[j][k]=h;
				h++;
			}
		}
		printf("Test %d:\n",i); 
		for(int j=1;j<=a;j++)
		{
			for(int k=1;k<=a;k++)
			{
				int sum=0;
				for(int h=1;h<=a;h++)
				{
					sum=sum+b[j][h]*b[k][h];
				}
				printf("%d ",sum);
			}
			printf("\n");
		}
	}
} 
