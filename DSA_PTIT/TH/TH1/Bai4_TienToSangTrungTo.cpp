// Hau to sang trung to
#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string x = string(1,s[i]);
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string tmp = "(" + a + s[i] + b + ")";
            st.push(tmp);
        }
        else st.push(x);
    }
    cout << st.top();
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}