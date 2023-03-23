#include<stdio.h>
#include<math.h>
int kiemtra(int i) 
{
	int s,m;
	s=0;
	m=i;
	for(int j=i; j>0; j/=10) 
	{
		s=s*10+j%10;
	}
	if(s==m) return 1;
	return 0;
}
int kt(int i) 
{
	int j;
	for(j=2; j<=sqrt(i); j++) 
	{
		if(i%j==0) return 0;
	}
	return 1;
}
int main() 
{
	int t,a,b,i;
	scanf("%d",&t);
	while(t--) 
	{
		int d=0;
		scanf("%d %d",&a,&b);
		for(i=a; i<=b; i++) 
		{
			if( kiemtra(i) ==1 && kt(i)==1) 
			{
				printf("%d ",i);
				d=d+1;
				if(d%10==0) printf("\n");
			}
		}
		printf("\n\n");
	}
}

