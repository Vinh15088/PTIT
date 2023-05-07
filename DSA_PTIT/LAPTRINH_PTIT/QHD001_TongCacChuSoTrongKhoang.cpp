#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int dp[m+1][m+1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = n; i <= m; i++) {
        dp[i][i] = i % 10;
        for (int j = i+1; j <= m; j++) {
            dp[i][j] = dp[i][j-1] + (j % 10);
        }
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += dp[i][m];
    }

    cout << "Tong cac chu so tu " << n << " den " << m << " la: " << sum << endl;
    }
}