#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int res = 0;
        for(int i=0; i<n; i++){
            res += (a[i]*i)%1000000007;
        }
        cout << res << endl;
    }
    return 0;
}