#include<stdio.h>
#include<math.h>

void nhap(int a[], int n)
{
	int i=0;
	for(i ; i<n ; i++){
		scanf("%d",&a[i]);
	}
}

void snt(int a[],int n)
{
	int i;
	for (i=0 ; i<n ; i++){
		int j;
		int dem=0;
		if(a[i]>1){
			for(j=2 ; j<=sqrt(a[i]) ; j++){
				if(a[i]%j==0){
					dem++;
				}
			}
			if(dem==0){
				printf("%d ",a[i]);
			}
		}
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for (i=1 ; i<=t ; i++){
		int a[100];
    	int n;
        scanf("%d",&n);
        nhap(a,n);
        snt(a,n);
        printf("\n");
	}
}
