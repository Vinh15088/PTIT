#include<stdio.h>
int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
 	int i, n;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (isPrimeNumber(i) == 1) {
            printf("%d\n", i);
        }
    }
}
