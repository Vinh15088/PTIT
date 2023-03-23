#include<stdio.h>
void in(int x[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
}
void out(int x[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
}
void act(int x[], int y[], int store[],int m, int n, int p)
{
	int tempX, tempY;
	for(int i=0;i<n;i++)
	{
		store[i] = x[i];
	}
	for(int i=p;i<m+p;i++)
	{
		store[i] = y[i-p];
	}
	for(int i=p;i<n;i++)
	{
		store[i+m] = x[i];
	}
}
int main()
{
	int x[100],y[100],m,n,p,store[100];
	scanf("%d %d",&n,&m);
	in(x,n);
	in(y,m);
	scanf("%d",&p);
	act(x,y,store,m,n,p);
	out(store,m+n);
	return 0;
}
