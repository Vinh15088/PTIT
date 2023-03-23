#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int dem=0;
		for(int i=2;i<=10000;i++)
		{
			int kq=1;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					kq=0;
					break;
				}
			}
			if(kq==1) dem++;
			if(dem==n) return i;
		}
}
int main()
{
	int b;
	scanf("%d",&b);
	for(int k=1;k<=b;k++)
	{
		int n,a[200][200];
		scanf("%d",&n);
		int hang=n-1,cot=n-1,d=0,gt=1;
		while(d<=n/2)
		{
			for(int i=d;i<=cot;i++) a[d][i]=snt(gt++);
			for(int i=d+1;i<=hang;i++) a[i][cot]=snt(gt++);
			for(int i=cot-1;i>=d;i--) a[hang][i]=snt(gt++);
			for(int i=hang-1;i>d;i--) a[i][d]=snt(gt++);
			d++;hang--;cot--;
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) printf("%d ",a[i][j]);
			printf("\n");
		}
	}
}
