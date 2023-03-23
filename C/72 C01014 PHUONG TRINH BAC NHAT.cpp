#include<stdio.h>
int main()
{
	float a,b,x;
	scanf("%f%f",&a,&b);
	if(a==0)
		if(b==0)
		 	printf("Vo so nghiem");
		else
			printf("Vo nghiem");
	else 
		{
			x=-b/a;
		printf("%.2f",x);
		}
		return 0;
}


