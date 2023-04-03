#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[2*n-2];
        for(int i=0; i<2*n-2; i++){
            cin >> a[i];
        }
        sort(a, a+2*n-2);
        // for(int i=0; i<2*n-2; i++) cout << a[i] << " ";
        int count = 1;
        for(int i=0; i<2*n-3; i++){
            if(a[i] != a[i+1]) count++;
        }
        // cout << count << endl;
        if(count == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}