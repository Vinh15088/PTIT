#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int k;
	for(k=1 ; k<=t ;k++){
    	int n;
    	scanf("%d",&n);
    	int i;
    	int a[n];
    	for (i=0 ; i<n ; i++){
    		scanf("%d",&a[i]);
    	}
	    for (i=0 ; i<n ; i++){
    		if(a[i]%2==0){
    			printf("%d ", a[i]);
			}
    	}
    	printf("\n");
    }
	return 0;
}
