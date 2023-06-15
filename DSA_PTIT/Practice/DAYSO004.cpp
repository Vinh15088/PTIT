#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
            b[i] = 1;
        }           
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[i] > a[j]){
                    b[i] = max(b[j]+1, b[i]);
                }
            }
        }

        int res = 0;
        for(int i=0; i<n; i++) res = max(res, b[i]);

        cout << res << endl;
    }
    return 0;
}