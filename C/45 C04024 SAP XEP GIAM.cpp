#include<stdio.h>
int main()
{
	int mang[100],n,i,j,temp;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		
		scanf("%5d\t", &mang[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for( j=i+1;j<n;j++)
		{
			if(mang[i] < mang[j])
			{
				temp = mang[i];
				mang[i] = mang[j];
				mang[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t", mang[i]);
	}
	return 0;
}


	

