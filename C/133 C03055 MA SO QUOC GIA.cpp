#include<stdio.h>
#include<string.h>
main () 
{ 
    int t; 
	scanf( "%d" , &t ); 
	while(t--) 
	{ 
		char s[ 100 ]; 
		scanf( "%s" , s ); 
		int k = strlen( s ) - 1; 
		for (int  i = 0 ; i<strlen(s); ) 
		{ 
			if(s[i] == '0' && s[ i + 1 ] == '8' && s[ i + 2 ] == '4' ) 
			{ 
				i +=  3; 
			}
			else
			{
				printf("%c",s[i]);
				i++;
			}

		} 
		printf ( "\n" ); 
	} 
}
