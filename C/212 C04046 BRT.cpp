#include<stdio.h>
#include<stdlib.h>
void QuickSort(long long a[],int l ,int r){
	int i = l;
	int j = r;
	long long p = a[(l+r)/2];
	while( i < j){
		while(a[i] < p ) i++;
		while(a[j] > p) j--;
		if(i<=j){
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(a,i,r);
	if(j > l) QuickSort(a,l,j);
}
int main(){
	int n;  scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		long long b[100000];
		int min=0;
		for(int i=1;i<=a;i++)
		{
			scanf("%lld",&b[i]);
			min=abs(b[1]-b[2]);
		} 
		QuickSort(b,1,a);
		for(int i=1;i<=a-1;i++)
		{
			for(int j=i+1;j<=i+1;j++)
			{
				if(min>=abs(b[i]-b[j]))
				{
					min=abs(b[i]-b[j]);
				}
			}
		}
		printf("%d ",min);
		int dem=0;
		for(int i=1;i<=a-1;i++)
		{
			for(int j=i+1;j<=i+1;j++)
			{
				if(min==abs(b[i]-b[j]))
				{
					dem++;
				}
			}
		}	
		printf("%d\n",dem);
	}
}
