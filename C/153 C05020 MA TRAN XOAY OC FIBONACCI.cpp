#include<stdio.h>
long long Fibonacci(int n)
{
    long long a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
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
	int a[100][100] , i, b=0, d=0;
	while(b<=n/2)
	{
		for(i=b;i<n-b;i++) 		a[b][i] = Fibonacci(d++);
		for(i=b+1;i<n-b;i++)    a[i][n-b-1] = Fibonacci(d++);
		for(i=n-b-2;i>=b;i--)	a[n-b-1][i] = Fibonacci(d++);
		for(i=n-b-2;i>b;i--)	a[i][b] = Fibonacci(d++);
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
