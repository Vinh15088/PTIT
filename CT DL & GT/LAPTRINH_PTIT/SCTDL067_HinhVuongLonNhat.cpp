 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n][m], b[501][501]; // mảng b dùng để dánh dấu, và đươc khai báo với tất cả các phần tử bằng 0
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }

        int res = 0;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j]== a[i-1][j-1] && a[i][j] == 1){
                    b[i][j] = min(b[i-1][j-1], min(b[i-1][j], b[i][j-1])) + 1;
                }
                res = max(res,b[i][j]);
            }
        }

        cout << res << endl;
    }
    return 0;
 }