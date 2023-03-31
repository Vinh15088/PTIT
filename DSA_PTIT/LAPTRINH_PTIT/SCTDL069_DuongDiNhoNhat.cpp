#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n][m], res[n][m];
        memset(res,0,sizeof(res));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j==0) res[i][j] = a[i][j];
                else if(i==0) res[i][j] = res[i][j-1] + a[i][j];
                else if(j==0) res[i][j] = res[i-1][j] + a[i][j];
                else {
                    res[i][j] = a[i][j] + min(res[i-1][j-1],min(res[i-1][j],res[i][j-1]));
                }
            }
        }
        cout << res[n-1][m-1] << endl;
    }
    return 0;
}