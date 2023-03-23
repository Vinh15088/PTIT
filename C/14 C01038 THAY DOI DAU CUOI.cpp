#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,k,d=0;
	scanf("%d",&a);
	int h=a;
	int s=a%10;
	while(a!=0)
	{
	    c=a%10;
	    a/=10;
	    d++;
	} 
	k=h-c*(pow(10,d-1))-s;
	k=k+c;
	s=s*pow(10,d-1)+k;
	printf("%d",s);
}
