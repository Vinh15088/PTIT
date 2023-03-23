#include<stdio.h>
#include<math.h>
int main
{
	int a,i=1,tmp=1;
	scanf("%d",&a);
	while(tmp <= a)
	{
		for(int j=1;j<=a-tmp;j++) printf("~");
		for(int j=1;j<=i;j+=2) printf("%d",j);
		for(int j=i-1;j>=1;j -= 2) printf("%d",j-1);
		printf("\n");
		i += 2;
		tmp++;
	}
}
