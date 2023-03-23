#include<stdio.h>
#include<math.h>
struct Point
{
	double x,y;
};
double distance(struct Point p, struct Point q)
{
	double dx = p.x-q.x, dy = p.y - q.y;
	double a=(double)dx*dx;
	double b=(double)dy*dy;
	double x=(double)sqrt(a + b);
	
	return x;
}
int check(double d1,double d2,double d3)
{
	if(d1+d2>d3 && d1+d3>d2 && d2+d3>d1) return 1;
	return 0;
}
main()
{
	int t; struct Point A,B,C;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y);
		double d1 = distance(A,B);
		double d2 = distance(A,C);
		double d3 = distance(B,C);
		if(check(d1,d2,d3)==0) printf("INVALID\n");
		else printf("%.3lf\n",d1+d2+d3);
	}
	return 0;
}
