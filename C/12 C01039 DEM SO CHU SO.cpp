#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sochuso=0;
	if(n==0)
	{
		sochuso=1;
	}
	while(n != 0)
	{
		sochuso +=1;
		n /=10;
	}
	printf("%d\n",sochuso);
	return 0;
}
