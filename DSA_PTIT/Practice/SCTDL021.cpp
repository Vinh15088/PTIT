#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;

ll poww(ll n, ll k){
    if(k==0) return 1;
    if(k==1) return n;
    ll x = poww(n,k/2);
    ll y = (x*x)%mod;
    if(k%2==0) return y;
    return (n*y)%mod;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll a,n; cin >> a >> n;
        cout << poww(a,n) << endl;
    }
    return 0;
}