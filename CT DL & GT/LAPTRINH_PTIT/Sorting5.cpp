#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,a; cin >> n >> m;
        int dp[10001] = {0};
        for(int i=0; i<n+m; i++){
            cin >> a;
            dp[a]++;
        }
        for(int i=0; i<10001; i++){
            if(dp[i] > 0) cout << i << " ";
        }
        cout << endl;
        for(int i=0; i<10001; i++){
            if(dp[i] > 1) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}