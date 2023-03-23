#include<bits/stdc++.h>
using namespace std;
int a[1005][1005], m, n;
int check(int x, int y){
    int result = a[x][y];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){

            result += max(a[i-1][j+1], a[i][j+1], a[i+1][j+1]);
        }
    }
    return result;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int x, y; cin >> x >> y;
        cout << check(x,y) << endl;
    }
    return 0;
}
