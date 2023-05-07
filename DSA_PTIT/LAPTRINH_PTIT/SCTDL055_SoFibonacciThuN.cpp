#include<bits/stdc++.h>
using namespace std;

int Fibo(int n){
    if(n<2) return n; 
    int f0 = 0, f1 = 1;
    for(int i=2; i<=n; i++){
        int fi = (f0 + f1) % 1000000007;
        f0 = f1;
        f1 = fi;
    }
    return f1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << Fibo(n) << endl;
    }
    return 0;
}