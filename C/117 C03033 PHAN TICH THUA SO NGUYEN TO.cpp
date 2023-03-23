#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int j;
	for(j=1 ; j<=t ; j++)
	{
    	int a;
    	scanf("%d",&a);
    	int i;
    	printf("%d =",a);
    	for(i=2 ; i<=a ;i++)
    	{
    		int dem=0;
    		while(a%i==0){
    			dem++;
    			a=a/i;
    		}
    		if(dem>0)
    		printf(" %d^%d ",i,dem);
    		if(a!=1 && dem>0) printf("*");
    	}
    	printf("\n");
    }
	return 0;
}
