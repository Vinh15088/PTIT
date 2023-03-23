#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int j;
	for (j=1 ; j<=t ; j++){
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		int b;
		scanf("%d",&b);
		int i=0;
		int dem=0;
		while(b!=0){
			int x=b/a[i];
			if(x>0){
				dem=dem+x;
				b=b%a[i];
			}
			i++;
		}
		printf("%d\n",dem);
	}
	return 0;
}
