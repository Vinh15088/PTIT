#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ')') st.push(s[i]);
            else {
                string tmp = "";
                while(st.top() != '('){
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                if(!st.empty() && st.top() == '-'){
                    for(char j:tmp){
                        if(j == '+') j = '-';
                        else if(j == '-') j = '+';
                        st.push(j);
                    }
                }
                else for(char j:tmp) st.push(j);
            }
        }
        string res = "";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        cout << res << endl;
    }
}