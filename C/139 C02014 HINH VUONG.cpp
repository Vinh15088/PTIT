#include<stdio.h>
#define max 100
void nhap(int a[][max],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
void innerPattern(int n)
{
	int size=2*n-1;
	int front=0;
	int back=size-1;
	int a[max][max];
	while(n!=0)
	{
		for(int i=front;i<=back;i++)
		{
			for(int j=front;j<=back;j++)
			{
				if(i==front||i==back||j==front||j==back)
				a[i][j]=n;
			}
		}
		++front;
		--back;
		--n;
	}
	nhap(a,size);
}
int main()
{
	int n;
	scanf("%d",&n);
	innerPattern(n);
	return 0;
}
