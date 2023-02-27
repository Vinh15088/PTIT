// #include<bits/stdc++.h>
// using namespace std;

// int N, a[10001], check[1001] = {0};

// void Print() {
//     for(int i=1; i<=N; i++){
//         cout << a[i];
//     }
//     cout << " ";
// }

// void Try(int i){
//     for(int j=N; j>=1; j--){
//         if(check[j] == 0) {
//             check[j] = 1;
//             a[i] = j;
//             if(i == N) Print();
//             else Try(i+1);
//             check[j] = 0;
//         }
//     }
// }

// int main(){
//     int t; cin >> t;
//     while(t--){
//         cin >> N;
//         Try(1);
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int pos = s.find_last_of("0");
        if(pos == -1) cout << string(s.size(), '0') << endl;
        else {
            s[pos] = '1';
            cout << s.substr(0, pos+1) + string(s.size() - pos -1, '0') << endl;
        }    
    }
    return 0;
}