#include<stdio.h>
void nhap(long a[], long n)
{
	long i;
	for(i=0 ; i<n ; i++)
	{
		scanf("%ld",&a[i]);
	}
}
void kt(long a[] , long n)
{
	long i,j;
	long s=0;
	for(i=0 ; i<n-1 ; i++)
	{
		long dem=1;
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]==a[j])
			{
				dem++;
			}
		}
		if(dem>1)
		{
			printf("%ld",a[i]);
			break;
		}
		else s++;
	}
	if(s==n-1)
	{
		printf("NO");
	}
	printf("\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for (i=1 ; i<=t ; i++)
	{
		long a[1000000];
	    long n;
	    scanf("%ld",&n);
	    nhap(a,n);
	    kt(a,n);
	}
}
