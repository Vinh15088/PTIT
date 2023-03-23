#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int flag = 1;
    	for(int i = 0; i < n; i++)
    	{
        	if(a[i] != a[n - i - 1])
        	{
            	flag = 0;
            	break;
        	}
    	}
    	if(flag==1) printf("YES\n");
    	else printf("NO\n");
    	
	}
	return 0;
}
