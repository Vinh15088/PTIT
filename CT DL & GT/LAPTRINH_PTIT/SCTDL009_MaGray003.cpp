#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string res(1, s[0]);
    for(int i=1; i<s.length(); ++i){
        if(s[i] != s[i-1]) res += '1';
        else res += '0';
    }
    cout << res;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}