#include<stdio.h>
#include<math.h>
int check(int n)
{
	int chan=0,le=0;
	while(n>0)
	{
		int k = n%10;
		n /= 10;
		if(k%2==0) chan++;
		else le++;
	}
	if(chan==le) return 1;
	return 0;
}
int main()
{
	int n, count =0;
	scanf("%d",&n);
	int c=pow(10,n-1);
	int d=pow(10,n)-1;
	for(int i=c;i<=d;i++)
	{
		if(check(i)==1)
		{
			printf("%d ",i);
			count += 1;
			if(count%10==0) printf("\n");
		}
	}
}
