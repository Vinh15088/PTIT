#include<stdio.h>
int check(int m,int n)
{
	while(m!=n)
	{
		if(m>n) m=m-n;
		else n=n-m;
	}
	if(n==1) return 0;
	return 1;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a<b;
	for(int i=a;i<=b;i++)
	{
		for(int j=i;j<=b;j++)
		{
			if(i!=j && check(i,j)==0) printf("(%d,%d)\n",i,j);
		}
	}
}
