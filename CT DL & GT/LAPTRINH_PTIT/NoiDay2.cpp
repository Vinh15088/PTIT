#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main(){
    int n; cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push(x);
    }
    long long res = 0;
    while(a.size() > 1){
        long long x = a.top(); a.pop();
        long long y = a.top(); a.pop();
        long long ans = (x+y)%mod;
        a.push(ans);
        res += ans;
        res %= mod;
    }
    cout << res << endl;
    return 0;
}