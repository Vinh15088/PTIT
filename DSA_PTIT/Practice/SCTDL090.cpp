#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st; 
        for(int i=0; i<s.length(); i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()){
                    cout << "NO" << endl;
                    return 0;
                }
                char c = st.top(); st.pop();
                if(c!='[' && s[i]==']' || c!='{' && s[i]=='}' || c!='(' && s[i]==')'){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
        if(!st.empty()) cout << "NO" << endl;
        else cout << "YES" << endl;   
    }
    return 0;
}