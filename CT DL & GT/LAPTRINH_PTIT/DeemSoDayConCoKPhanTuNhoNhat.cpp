#include<bits/stdc++.h>
using namespace std;

int check(int n, int k){
    int c[n+1][k+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<= min(i,k); j++){
            if(j==0 || j==i) c[i][j] = 1;
            else c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    return c[n][k];
}

int solve(int a[], int n, int k){
    sort(a, a+n);
    int num = a[k-1];
    int y = 0;
    for(int i=k-1; i>=0; i--){
        if(a[i] == num) y++;
    }
    int count = y;
    for(int i=k; i<n; i++){
        if(a[i] == num) count++;
    }
    return check(count, y);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k,a[10001]; cin >> n >> k;
        for(int i=0; i<n; i++) cin >> a[i];
        cout << solve(a,n,k) << endl;
    }
    return 0;
}