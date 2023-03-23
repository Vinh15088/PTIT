#include<stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int dem=0;int i=2;
	while(dem<n)
	{
		if(snt(i)) 
		{
			printf("%d\n",i);
			dem++;
		}
		i++;
	}
}
