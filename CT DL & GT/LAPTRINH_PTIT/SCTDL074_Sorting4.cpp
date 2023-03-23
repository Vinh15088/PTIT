#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int res[10001];
        memset(res,0,sizeof(res));
        // hop nhat 2 mang thanh 1, de de dang thuc hien voi mang res
        for(int i=0; i<n+m; i++) {
            int a; cin >> a;
            res[a]++;
        }
        for(int i=0; i<10001; i++){
            if(res[i] > 0) cout << i << " ";
        }
        cout << endl;
        for(int i=0; i<10001; i++){
            if(res[i] > 1) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}