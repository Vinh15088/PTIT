#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    vector<int> res[1001];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) res[i].push_back(j);
        }
    }
    
    for(int i=1; i<=n; i++){
        cout << i << ": ";
        for(auto x:res[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}