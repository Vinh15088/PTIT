#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>& st){
    if(st.empty()) return;
    int x = st.top(); st.pop();
    reverseStack(st);
    st.push(x);
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        stack<int> st;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int n; 
        while(ss >> n){
            st.push(n);
        }
        reverseStack(st);
        while(!st.empty()){
            cout << st.top() << " "; st.pop();
        }
        cout << endl;
    }
    return 0;
}

