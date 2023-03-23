#include<stdio.h>
#include<math.h>
int tangdan(int n)
{
	while(n > 9) 
	{
		int e = n % 10;
		n /= 10;
		int d = n % 10;
		if(e <= d) return 0;
	}
	return 1;
}
int giamdan(int n)
{
	while(n > 9) 	
	{
		int e = n % 10;
		n /= 10;
		int d = n % 10;
		if(e >= d) return 0;
	}
	return 1;
}
int snt(int n)
{
	if(n<=1) return 0;
	else
	{
		for(int i=2;i <= sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main()
{
	int k;
	scanf("%d", &k);
	while(k--)
	{
		int n,i;
		scanf("%d", &n);
		int dem=0;
		int d=pow(10,n);
		for(i=pow(10,n-1);i<d;i++)
		{
			if((tangdan(i)==1 || giamdan(i)==1) && snt(i)==1) dem++;
		}
		printf("%d\n", dem);
	}
}
