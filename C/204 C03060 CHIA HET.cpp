#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,dem=0;
	scanf("%d %d",&a,&b);
	for(int i=2;i<=a;i=i+2)
	{
		int c=i;
		while(c%2==0)
		{
			dem++;
			c/=2;
		}
	}
	if(dem>=b) printf("Yes");
	else printf("No");
}
