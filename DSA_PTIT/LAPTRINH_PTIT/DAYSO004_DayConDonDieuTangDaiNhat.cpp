#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            // khoi tao cac gia tri cua mang b = 1
            b[i] = 1;
            for(int j=0; j<i; j++){
                if(a[i] > a[j]){
                    b[i] = max(b[j]+1, b[i]);
                }
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            // tim gia tri max trong mang b
            ans = max(ans,b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}