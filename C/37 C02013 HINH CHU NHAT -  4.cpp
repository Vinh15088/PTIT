#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int max=m;
	if(m<n) max=n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=max-i+1) printf("%d",max-i-j+2);
			else printf("%d",i+j-max);
		}
		printf("\n");
	}
	return 0;
}
