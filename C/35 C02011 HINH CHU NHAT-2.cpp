#include<stdio.h>

int main()
{
	int a,b,h;
	scanf("%d%d",&a,&b);
	for(int i=1 ; i<=a ; i++ )
	{
		h=i;
		for(int j=1 ; j<=b ; j++ )
		{
			printf("%d",h);
			if( j<b-i+1 )
					h++;
			else
					h--;
		}
		printf("\n");
	}
 	return 0;
}
