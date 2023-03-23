#include<stdio.h>
#include<math.h>
long long max(long long a, long long b)
{
    if(a > b) return a;
    return b;
}

void findSubArrayMax(long long arr[], long long n) 
{
    long long best = -pow(10, 9) , sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    printf("%lld\n",best);
}

int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n;scanf("%d", &n);
        long long arr[n];
        for(int i = 0; i < n; i++) scanf("%lld", &arr[i]);
        findSubArrayMax(arr, n);
    }
}
