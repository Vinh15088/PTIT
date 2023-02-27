#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
    string res = "";
    for(int i=0; i<s.length(); i++){
        if(i==0) res += s[0];
        else {
            if(s[i] != s[i-1]) res += '1';
            else res += '0';
        }
    }
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        cin >> s;
        solve();
    }
    return 0;
}