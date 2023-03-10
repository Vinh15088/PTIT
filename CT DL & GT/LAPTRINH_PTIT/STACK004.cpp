// #include <bits/stdc++.h>
// using namespace std;

// int prio(char c) {
//     if (c == '^') return 4;
//     if (c == '*' || c == '/') return 3;
//     if (c == '+' || c == '-') return 2;
//     return 1;
// }

// void testCase() {
//     string s; cin >> s;
//     string res = "";
//     stack<char> st;
//     for (int i = 0; i < s.length(); ++i) {
//         if (s[i] == '(') st.push(s[i]);
//         else if (s[i] == ')') {
//             while (st.top() != '(') {
//                 res += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
//             while (!st.empty() && prio(st.top()) >= prio(s[i])) {
//                 res += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//         else res += s[i];
//     }
//     while (!st.empty()) {
//         if (st.top() != '(') res += st.top();
//         st.pop();
//     }
//     cout << res;
// }

// int main() {
//     int T = 1; cin >> T;
//     while (T--) {
//         testCase();
//         cout << "\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int check(char x){
    if(x == '^') return 4;
    if(x == '*' || x == '/') return 3;
    if(x == '+' || x == '-') return 2;
    return 1;
}

void solve(){
    string s, res = ""; cin >> s;
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
        else if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
        else if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')') {
            while(st.size() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while(st.size() && check(st.top()) >= check(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.size()) {
        if(st.top() != '(') res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}