#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        string res;
        stack<string> st;
        stringstream ss(s);
        while(ss >> res){
            st.push(res);
        }
        while(!st.empty()){
            cout << st.top() << " "; st.pop();
        }
        cout << endl;
    }
    return 0;
}