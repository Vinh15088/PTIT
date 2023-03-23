#include<stdio.h>
#include<stdbool.h>
bool snt(int n)
{
	if(n<2) 
	{
		return false;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(snt(n)== true) printf("YES\n");
		else printf("NO\n");
	}
}
