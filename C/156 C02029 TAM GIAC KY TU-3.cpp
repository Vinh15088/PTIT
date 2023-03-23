#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		printf("%c ",i+64);
		int h=a-1;
		int a=i;
		for(int j=1;j<i;j++)
		{
			a+=h;
			printf("%c ",a+64);
			h--;
		}
		printf("\n");
	}
	return 0;
}
