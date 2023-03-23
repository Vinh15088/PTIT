#include<stdio.h>
int main(){
	
   int a, b;
   scanf("%d%d",&a,&b);
   int start=64;
   for(int i=1;i<=a;i++){
   	char t=start;
   	for(int j=1;j<=b;j++){
   		printf("%c",t);
   		if(j<b-i+1) t++;
	   }
	   printf("\n");
	   if(i<b)start++;
   } 
   
}
