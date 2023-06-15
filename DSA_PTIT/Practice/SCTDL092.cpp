#include<bits/stdc++.h>
using namespace std;

int check(char c){
    if(c == '^') return 4;
    if(c == '*' || c == '/') return 3;
    if(c == '+' || c == '-') return 2;
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string res = "";
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
            else if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
            else if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')') {
                while(st.size() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
                while(st.size() && check(st.top()) >= check(s[i])){
                    res += st.top(); 
                    st.pop();
                }
                st.push(s[i]);
            }
        }

        while(st.size()){
            if(st.top() != '(') res += st.top(); st.pop();
        }

        cout << res << endl;
    }
    return 0;
}