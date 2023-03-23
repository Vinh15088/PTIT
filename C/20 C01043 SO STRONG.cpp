#include<stdio.h>
int main()
{
    int n, n1, tong = 0;
    int giaithua;
    scanf("%d",&n);
    n1 = n;
    for (int j = n; j > 0; j = j / 10)
    {
		giaithua=1;
        for (int i = 1; i <= j % 10; i++)
        {
            giaithua *= i;
        }
        tong += giaithua;
	}
    if (tong == n1) printf("1" );
    else printf("0");
}
