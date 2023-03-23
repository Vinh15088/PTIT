#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int dem=0;
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
int UCLN(int a, int b)
{
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int k=0;
		for(int i=n-1;i>0;i--)
		{
			if(UCLN(n,i)==1) k++;
		}
		if(snt(k)==1) printf("YES\n");
		else printf("NO\n");
	}
}
