#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int res1[10001];
        int res2[10001];
        // khai bao mang res co cac phan tu deu bang 0
        memset(res1,0,sizeof(res1));
        memset(res2,0,sizeof(res2));

        // nhap mang thu nhat
        for(int i=0; i<n; i++){
            int x; cin >> x;
            res1[x]++;  // tang gia tri cua mang thu nhat tai phan tu thu x
        }

        // nhap mang thu hai
        for(int i=0; i<m; i++){
            int x; cin >> x; // tang gia tri cua mang thu hai tai phan tu thu x
            res2[x]++;
        }

        // Hop cua hai mang
        for(int i=0; i<10001; i++){
            if(res1[i] > 0 || res2[i] > 0) cout << i << " ";
        }
        cout << endl;

        // Giao cua hai mang
        for(int i=0; i<10001; i++){
            if(res1[i] > 0 && res2[i] > 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}