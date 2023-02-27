#include<bits/stdc++.h>
using namespace std;

string s;
void solve() {
    int i = s.length() - 1;
    while(i>=0 && s[i] == '1') {
        s[i] = '0';
        --i;
    }
    if(i != -1) s[i] = '1';
    for(int i=0; i<s.size(); i++) cout << s[i];
    cout << endl;
}

// // void solve(string s){
// //     int i;
// //     for(i=s.length()-1; i>=0; i--){
// //         if(s[i] == '0') {
// //             s[i] = '1';
// //             break;
// //         }
// //     }
// //     for(int j=i+1; j<s.length(); j++) s[j] = '0';
// //     cout << s << endl;
// // }

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        solve();
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void solve(string s){
//     int check = -1;
//     for(int i=s.size()-1; i>=0; i--){
//         if(s[i] == '0') {
//             check = i;
//             break;
//         }
//     }
//     if(check == -1) {
//         for(int i=0; i<s.size(); i++) cout << "0";
//         cout << endl;
//     } 
//     else {
//         s[check] = '1';
//         for(int i=check+1; i<s.size(); i++) s[i] = '0';
//         cout << s << endl;
//     }
// }

// int main() {
//     int t; cin >> t;
//     while(t--){
//         string s; cin >> s;
//         solve(s);
//     }
//     return 0;
// }