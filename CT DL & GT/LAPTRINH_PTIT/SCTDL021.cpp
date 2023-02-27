#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    if (k == 1) return n;
    long long x = poww(n, k / 2);
    long long y = (x * x) % MOD;
    if (k % 2 == 0) return y;
    return (n * y) % MOD;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long a,n; cin >> a >> n;
        cout << poww(a,n) << endl;
    }
    return 0;
}