#include<stdio.h>
int kt(int a)
{
	int dem=0;
	while(a>=10)
	{
		int x=a%10;
		a=a/10;
		int y=a%10;
		if(x<y)
		{
			dem++;
		}
		else if(x>=y)
		{
			dem=0;
			break;
		}
	}
	if(dem>0) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int dem=0;
		int a,b;
		scanf("%d%d",&a,&b);
		for(a ; a<=b ; a++)
		{
			if(kt(a)==1) dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}
