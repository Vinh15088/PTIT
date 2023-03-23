#include<stdio.h>

void Swap(int *a, int *b)
{
    int tempt = *a;
    *a = *b;
    *b = tempt;
}

int main()
{
    int arr[101];
    int n;
	scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = n-1; i > 0; i--)
	{
        int check = 1;
        for(int j = 0; j < i; j++)
		{
            if(arr[j] > arr[j+1])
			{
                Swap(&arr[j], &arr[j+1]);
                check = 0;
            }
        }
        if(check) break;
        else
		{
            printf("Buoc %d: ",n-i);
            for(int k = 0; k < n; k++) printf("%d ",arr[k]);
            printf("\n");
        }
    }
}
