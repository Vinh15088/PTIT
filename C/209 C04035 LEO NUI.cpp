#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int len[50005],xuong[50005],tonglen=0,tongxuong=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&len[i],&xuong[i]);
		tonglen += len[i];
		tongxuong += xuong[i];
	}
	if(tonglen>tongxuong)
	{
		int min=1000000;
		for(int i=0;i<n;i++)
		{
			if(xuong[i]<min)
			{
				min=xuong[i];
			}
		}
		printf("%d",tonglen+min);
	}
	else 
	{
		int min=1000000;
		for(int i=0;i<n;i++)
		{
			if(len[i]<min)
			{
				min=len[i];
			}
		}
		printf("%d",tongxuong+min);
	}
	return 0;
}
