#include <stdio.h>

int main()
{
    int i, j, k, N;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        if(i & 1)
            k = 1;
        else
            k = 2;
        for(j=1; j<=i; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}
