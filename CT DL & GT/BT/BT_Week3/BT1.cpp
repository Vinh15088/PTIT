// chuyen tu thap phan sang nhi phan
#include<bits/stdc++.h>
using namespace std;

void NhiPhan(int n) {
    if(n!=0) {
        NhiPhan(n/2);
        cout << n%2;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // string s = "";
        // while(n>0) {
        //     int tmp = n%2;
        //     s = to_string(tmp) + s;
        //     n /= 2;
        // }
        // cout << s << endl; 
        NhiPhan(n);
        cout << endl;
    }
    return 0;
}