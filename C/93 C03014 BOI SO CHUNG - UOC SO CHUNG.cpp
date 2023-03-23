#include<stdio.h>
int USCLN(long a,long b) {
   while(b>0)
   {
   	long t=a%b;
   	a=b;
   	b=t;
   }
   return a;
}
long long BSCNN(long a,long b) 
{
    return (long long) (a * b) / USCLN(a, b);
}

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long a, b;
    	scanf("%ld %ld", &a,&b);
    	printf("%lld %ld",BSCNN(a,b),USCLN(a,b));
    	printf("\n");
	}
}
