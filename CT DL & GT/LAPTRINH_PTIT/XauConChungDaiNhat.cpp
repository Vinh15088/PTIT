#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int main(){
    int t; cin >> t;
    while(t--){
        string s1,s2; cin >> s1 >> s2;
        int n = s1.length(), m = s2.length();
        // dp[i][j] la do dai xau con
        memset(dp,0,sizeof(dp));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}