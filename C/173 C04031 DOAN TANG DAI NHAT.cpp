#include<stdio.h>

#define MAX 101

int main(){
    int test; scanf("%d", &test);
    for(int i = 1; i <= test; i++){
        int n; scanf("%d", &n);
        int arr[MAX];
        for(int j = 0; j < n; j++) scanf("%d", &arr[j]);
        int count[MAX];
        for(int j = 0; j < MAX; j++) count[j] = 0;
        for(int j = 0; j < n; j++){
            count[j]++;
            int m = j+1;
            while(arr[m] > arr[m-1]){
                if (m == n) break;
                count[j]++;
                m++;
            }
        }
        int max = count[0];
        for(int j = 1; j < MAX; j++){
            if(count[j] > max) max = count[j];
        }
        printf("Test %d:\n",i);
        printf("%d\n", max);
        for(int j = 0; j < MAX; j++){
            if(count[j] == max){
                for(int k = j; k < j + max ; k++)
                    printf("%d ",arr[k]);
                printf("\n");
            }
        }
    }
}
