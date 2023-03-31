#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    while(m--){
        int x; cin >> x;
        int idx = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == x){
                idx = i + 1;
                break;
            }
        }
        cout << idx << " ";
    }
    return 0;
}