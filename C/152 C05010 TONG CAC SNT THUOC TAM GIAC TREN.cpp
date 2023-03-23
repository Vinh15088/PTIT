#include<stdio.h>
#include<math.h>
int ngto(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	} 
	return 1;
}
void nhap(int a[20][20], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[20][20], int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(ngto(a[i][j])) t += a[i][j];
		}
	}
	printf("%d",t);
}
int main()
{
	int a[20][20], n;
	scanf("%d",&n);
	nhap(a,n);
	in(a,n);
}
