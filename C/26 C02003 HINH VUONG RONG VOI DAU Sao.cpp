#include<stdio.h>
void hinhvuong(int n)
{
	for(int i=0;i<n;i++)
	{
		if(i==n-1 || i==0)
		{
			for(int j=0;j<n;j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for(int j=0;j<n-2;j++)
			{
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	hinhvuong(n);
	return 0;
}
