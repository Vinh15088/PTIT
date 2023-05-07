#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int dp[1001][1001] = {0};
    // memset(dp, 0, sizeof(dp));
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        dp[y-1][x-1] = 1;
        dp[x-1][y-1] = 1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    // return 0;
}