#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[2*n-2];
        for(int i=0; i<2*n-2; i++) cin >> a[i];
        sort(a, a+2*n-2);
        int count = 0;
        for(int i=0; i<2*n-2; i++){
            if(a[i] != a[i+1]) count++;
        }
        if(count == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}