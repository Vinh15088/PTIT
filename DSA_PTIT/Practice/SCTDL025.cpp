#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        ll sum = 0, res = INT_MIN;
        for(int i=0; i<n; i++){
            sum += a[i];
            res = max(res, sum);
            if(sum < 0) sum = 0;
        }
        cout << res << endl;
    }
    return 0;
}