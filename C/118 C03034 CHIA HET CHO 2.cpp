#include<stdio.h>
#include<math.h>
int kt(int a)
{
	int i;
	int dem=0;
	if(a%2==0) dem=1;
	for (i=2; i<=sqrt(a) ; i++)
	{
		if(a%i==0 && i%2==0) dem++;
		
		if(a%i==0 && (a/i)%2==0 && i!=(a/i)) dem++;
	}
	return dem;
}

int main()
{
	int t;
	scanf("%d",&t);
	int j;
	for (j=1 ; j<=t ; j++)
	{
		int a;
		scanf("%d",&a);
		printf("%d\n",kt(a));	
	}
}

