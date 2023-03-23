#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m+i;j++)
		{
			if(i>j) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}
