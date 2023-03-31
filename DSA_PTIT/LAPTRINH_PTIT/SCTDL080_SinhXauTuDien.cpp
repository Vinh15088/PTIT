#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
        stack<char> st;
        int pos;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a') {
                st.push(s[i]);
                pos = i;
                break;
            }
        }
        for(int i=pos; i<s.length(); i++){
            char tmp = st.top();
            tmp = tmp + 1;
            if(s[i] == tmp) st.push(s[i]);
        }
        if(st.size() == 0) cout << 0 << endl;
        else cout << st.size() << endl;
    }
    return 0;
}