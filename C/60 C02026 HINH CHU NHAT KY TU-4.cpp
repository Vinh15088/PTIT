#include <stdio.h>
 int main()
{
	// bang ma acsii
    
	int a ,b;
	scanf("%d%d",&a,&b);
	int c[20][20] ={0};
	int start = 64,end = 64 + b;
	int d = start;
	for(int i = a - 1; i>=0;i--)
	{
		start = start + 1;
		d =  start;
		for(int j=0; j<b; j++)
		{ 
			c[i][j] = d++;
 			if(c[i][j]> end)
			{
 				c[i][j] = end;
			}
			
		}
	}
// xuat

	for(int i = 0;i<a;i++)
	{
		for(int j = 0;j<b;j++)
		{
			printf("%c",c[i][j]);
		}
		printf("\n");
	}
}
