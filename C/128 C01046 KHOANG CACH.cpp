#include<stdio.h>
#include<math.h>
main()
{
	int n;
	double a,b,c,d,x=0;
	scanf("%d",&n);
	while(n--)	
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		x=sqrt((c-a)*(c-a)+(b-d)*(b-d));
		printf("%.4lf\n",x);
	}
}
