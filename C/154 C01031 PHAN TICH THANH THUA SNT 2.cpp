#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d",i);
			n /=i;
			if(n>=i) printf("x");
		}
		else i++;
	}
}
