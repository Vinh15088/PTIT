#include<stdio.h>

int a[100];
int n;
 void nhap()
 {
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
 }
 void dem()
 {
 	for(int i=0;i<n;i++)
 		{
 			if(a[i]%2==0) printf("%4d",a[i]); 
		 }
		 printf("\n");
	for(int i=0;i<n;i++)
 		{
 			if(a[i]%2 !=0) 
			
			 printf("%4d",a[i]);
		 }
 }
 int main()
 {
 	nhap();
 	dem();
 		return 0;
 }
