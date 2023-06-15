#include<bits/stdc++.h>
using namespace std;

string s;
void solve(){
    int check = -1;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '0'){
            check = i;
            break;
        }
    }

    if(check == -1){
        for(int i=0; i<s.size(); i++){
            cout << "0";
        }
        cout << endl;
    }

    else {
        s[check] = '1';
        for(int i=check+1; i<s.size(); i++) s[i] = '0';
        cout << s << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        solve();
    }
    return 0;
}