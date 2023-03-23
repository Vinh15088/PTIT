#include<stdio.h>
#include<math.h>
int main()
{
	long m,n,count=0;
	scanf("%ld %ld",&m,&n);
	long start=sqrt(m);
	start=(start*start ==m) ? start : start+1;
	long end=sqrt(n);
	printf("%d\n",end-start+1);
	for(long i=start;i<=end;i++)
	{
		printf("%ld\n",i*i);
	}
	return 0;
}
