#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--)
	{
		double a,b,c,d,e,f;
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		if((a==c && a==e && c==e) || (b==d && b==f && d==f)) printf("INVALID\n");
		else
		{
			double i=sqrt((a-c)*(a-c)+(b-d)*(b-d));
			double j=sqrt((a-e)*(a-e)+(b-f)*(b-f));
			double k=sqrt((c-e)*(c-e)+(d-f)*(d-f));
			double p=(i+j+k)/2;
			if(i+j<=k || i+k<=j || k+j<=i) printf("INVALID\n");
			else printf("%.2lf\n",sqrt(p*(p-i)*(p-j)*(p-k)));
		}
	}
}
