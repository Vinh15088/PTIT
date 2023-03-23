#include<stdio.h> 
#include<math.h> 
main()
{ 
	int r; 
	scanf("%d",&r); 
	int st = r; 
	char chu = '@'-1; 
	for(int i =1; i<=r;i++)
	{ 
		for(int j = 1;j<=r;j++)
		{ 
			if(i+j <= r+1)
			{ 
				printf("%c",st+j-1+chu); 
			} 
		} 
		st--; 
		printf("\n"); 
	} 
}
