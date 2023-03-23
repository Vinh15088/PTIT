#include<stdio.h>
#include<math.h>
void khoitao(int arr[])
{
	for(int i=2;i<=sqrt(10000);i++)
	{
		if(arr[i]==0)
		{
			for(int j=2*i;j<10000;j+=i)
			{
				arr[j]=1;
			}
		}
	}
}

int main()
{
	int arr[10000]={0};
	khoitao(arr);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=2;i<=n/2;i++)
		{
			if(arr[i]==0 && arr[n-i]==0) printf("%d %d ",i,n-i);
		}
		printf("\n");
	}
	return 0;
}
