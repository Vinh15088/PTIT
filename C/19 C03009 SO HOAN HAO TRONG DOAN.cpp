#include<stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d %d",&n,&m);
	if(n>m)
	{
		int tmp=n;
		n=m;
		m=tmp;
	}
	for(int i=n;i<m;i++)
	{
		sum=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0) sum+=j;
		}
		if(sum==i) printf("%d ",sum);
	}
}
