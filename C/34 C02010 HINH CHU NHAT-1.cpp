#include <stdio.h>
int main(){
	int m,n,i,j;
	char s[11]="0123456789";
	scanf("%d%d", &m, &n);
	for (i=1; i <=m; i++)
	{
		for (j=i; j <=n; j++)
		{
			printf("%c", s[j]);
		}
		if (i-1>=1 && i <=n)
		for (j=i-1; j>=1; j--)
		{
			printf("%c", s[j]);
		}
		else if (i>n)
		{
			printf("%c", s[i]);
			for (j=n-1; j >=1; j--)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}
