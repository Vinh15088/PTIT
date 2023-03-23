#include<stdio.h> 
#include<math.h> 
int ngto(int x) 
{ 
	int i; 
	if(x<2) return 1; 
	for(i=2;i<=sqrt(x);i++) 
		if(x%i==0) return 0; 
 	return 1; 
}
int hh(int i) 
{ 
	return pow(2,i-1)*(pow(2,i)-1); 
} 
int main() 
{ 
	int n,t; 
	scanf("%d",&n); 
	for(int i=2;hh(i)<n;i++) 
	{ 
		t=pow(2,i)-1; if(ngto(t)==1) 
		printf("%d ", hh(i)); 
	}  
}
