#include<stdio.h>
int main()
{
	int n, tong=0;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		tong = tong + a[i];
	}
	float Ketqua = (float) tong/n;
	printf("%.3f",Ketqua);
	return 0;
}
