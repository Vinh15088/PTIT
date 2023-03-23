#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,sochan=0,sole=0;
		scanf("%d",&n);
		int tmp=n;
		while( tmp != 0)
		{
			int k = tmp%10;
			tmp /=10;
			if(k%2==0)
			{
				sochan++;
			}
			else sole++;
		}
		printf("%d %d",sole,sochan);
		printf("\n");
	}
}
