#include<stdio.h> 
int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		long long n; 
		scanf("%lld", &n); 
		long long dao = 0; 
		long long m = n; 
		while( m > 0 )
		{ 
			dao = dao * 10 + m % 10; 
			m /= 10; 
		} 
		if( dao == n )
		{ 
			printf("YES\n"); 
		}
		else 
		{ 
			printf("NO\n"); 
		} 
	} 
	return 0; 
}

