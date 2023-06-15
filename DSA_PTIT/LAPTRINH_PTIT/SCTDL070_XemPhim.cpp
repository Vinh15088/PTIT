#include<bits/stdc++.h>
using namespace std;

int c,n, maxx = 0, v[21], a[21] = {0};

void Try(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i<n) Try(i+1);
        else {
            int tong = 0;
            for(int k=1; k<=n; k++){
                if(a[k] == 1) tong += v[k];
            }
            if(tong > maxx && tong <= c) maxx = tong;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> c >> n;
        for(int i=1; i<=n; i++) cin >> v[i];
        Try(1);
        cout << maxx << endl;

        maxx = 0;
        memset(a, 0, sizeof(a));
    }
    return 0;
}