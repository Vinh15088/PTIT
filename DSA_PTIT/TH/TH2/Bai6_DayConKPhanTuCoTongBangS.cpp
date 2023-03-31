#include<bits/stdc++.h>
using namespace std;

int n, k, s, Count;
vector<int> a;

void solve(int pos, int k1, int sum){
    // đạt đủ k phần tử và có tổng bằng s
    if(k1 == k && sum == s) {
        Count++;
        return;
    }
    // trường hợp không đủ điều kiện để tiếp tục quay lui
    if(pos == n || k1 > k || sum > s) return;
    // quay lui tiếp đến phần tử tiếp theo
    solve(pos+1, k1+1, sum+a[pos]);
    // quay lui đến vị trí tiếp theo
    solve(pos+1, k1, sum);
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k >> s;
        a.resize(n);
        for(int i=0; i<n; i++) cin >> a[i];
        Count = 0;
        solve(0,0,0);
        cout << Count << endl;
    }
    return 0;
}