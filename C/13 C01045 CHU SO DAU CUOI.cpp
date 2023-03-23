#include<stdio.h>
#include<math.h>
main ()
{
	int a,sodau,socuoi;
	scanf("%d",&a);
	socuoi=a%10;
	int i;
	do
	{
		sodau = a%10;
	}
	while (a /=10);
	printf("%d %d",sodau,socuoi);
	return 0;
} 

