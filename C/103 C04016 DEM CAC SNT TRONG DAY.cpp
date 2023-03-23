#include<stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void ktra(int a[],int n)
{
	int b[10000]={0};
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(int i=2;i<10000;i++)
	{
		if(b[i]>0 && snt(i))
		{
			printf("%d xuat hien %d lan \n",i,b[i]);
		}
	}
}
int main()
{
	int t,n,a[100];
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		nhap(a,n);
		printf("Test %d: \n",i);
		ktra(a,n);
	}
	
	
	
	
	
	
	
	
	
	
	
}
