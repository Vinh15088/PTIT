#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void solve(){
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i=0; i<n; i++) cin >> a[i].first;
    for(int i=0; i<n; i++) cin >> a[i].second;
    sort(a, a+n, cmp);
    int res = 1;
    int current = a[0].second;
    for(int i=1; i<n; i++){
        if(a[i].first >= current){
            res++;
            current = a[i].second;
        }
    }
    cout << res << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}