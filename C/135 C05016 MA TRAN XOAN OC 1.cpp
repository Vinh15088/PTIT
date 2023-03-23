#include<stdio.h>
void in(int a[100][100], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void xoanoc(int n)
{
	int a[100][100] , i, b=0, d=1;
	while(b<=n/2)
	{
		for(i=b;i<n-b;i++) 		a[b][i] = d++;
		for(i=b+1;i<n-b;i++)    a[i][n-b-1] = d++;
		for(i=n-b-2;i>=b;i--)	a[n-b-1][i] = d++;
		for(i=n-b-2;i>b;i--)	a[i][b] = d++;
		b++;
	}
	in(a,n,n);
}
int main()
{
	int n;
	scanf("%d",&n);
	xoanoc(n);
}
