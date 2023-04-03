#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n+1][n+1];
    for(int i=1; i<=n; i++){
        cin >> a[1][i];
    }
    int cot = n-1;
    for(int i=2; i<=n; i++){
        for(int j=1; j<=cot; j++){
            a[i][j] = a[i-1][j] + a[i-1][j+1];
        }
        cot--;
    }
    cot = n;
    stack<string> st;
    for(int i=1; i<=n; i++){
        string res = "";
        res += "[";
        for(int j=1; j<cot; j++){
            res += to_string(a[i][j]) + " ";
        }
        res += to_string(a[i][cot]) + "]";
        cot--;
        st.push(res);
    }
    
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}