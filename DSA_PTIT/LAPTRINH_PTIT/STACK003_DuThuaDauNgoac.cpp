#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' ) count++;
        else {
            if(s[i] == ')') count--;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}