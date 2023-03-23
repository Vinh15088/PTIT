#include<bits/stdc++.h>
using namespace std;

bool checkNT(int n){
    if(n==0 || n==1) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

void solve(){
    int l,r; cin >> l >> r;
    for(int i=r; i>=l; i--){
        if(checkNT(i)){
            cout << i << endl;
            break;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}