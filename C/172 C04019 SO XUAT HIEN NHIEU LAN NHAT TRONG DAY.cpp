#include<stdio.h>
void nhap(int a[], int n)
{
	for(int i ; i<n ; i++)
		scanf("%d",&a[i]);
}
void xuat(int a[] , int n)
{
	int max=0;  int b[n]; int dem=0;
	for(int i=0 ; i<n ; i++)
	{
		b[i]=1;
	}
	for(int i=0 ; i<n ; i++)
	{
		int dem=1;
		if(b[i]==1)
		{
			b[i]=0;
			for(int j=i+1 ; j<n ; j++)
			{
				if(a[j]==a[i]){
					dem++;
					b[j]=0;
				}
			}
		}
		if(dem>max) max=dem;
	}
	int c[n];
	for(i=0 ; i<n ; i++)
	{
		c[i]=1;
	}
	for(i=0 ; i<n ; i++)
	{
		int s=1;
		if(c[i]==1){
			c[i]=0;
			for(j=i+1 ; j<n ; j++)
			{
				if(a[j]==a[i]){
					s++;  c[j]=0;
				}
			}	
		}
		if(s==max){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int t;  scanf("%d",&t);
	for(int i=1 ; i<=t ; i++)
	{
		int a[100],n;  scanf("%d",&n); nhap(a,n);
		xuat(a,n); printf("\n");
	}
}
