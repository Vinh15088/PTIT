#include <stdio.h>
int main()
{
    int i, j, N;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=2; j<=i*2; j+=2)
        {
            printf("%d", j);
        }
        for(j=(i-1)*2; j>=2; j-=2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
