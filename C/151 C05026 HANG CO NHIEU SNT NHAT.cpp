#include<stdio.h>
int ngto(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
void nhap(int a[20][20],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void xuly(int a[20][20],int n)
{
	int dem,snt;
	int demmax=0;
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		dem=0;
		for(int j=0;j<n;j++)
		{
			if(ngto(a[i][j])) dem++;
		}
		if(demmax<dem) 
		{
			demmax=dem;
			vitri = i+1;
		}
	}
	
	printf("%d\n" , vitri);
	for(int j=0;j<n;j++)
	{
		if(ngto(a[vitri-1][j])) printf("%d ",a[vitri-1][j]);
	}
}
int main()
{
	int a[20][20], n;
	scanf("%d",&n);
	nhap(a,n);
	xuly(a,n);
}
