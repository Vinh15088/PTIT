#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int l, int r, int k){
    if(r>=l){
        int m = l+(r-l)/2;
        if(a[m] == k) return m;
        if(a[m] > k) return BinarySearch(a,l,m-1,k);
        return BinarySearch(a,m+1,r,k);
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(BinarySearch(a,0,n-1,k)==-1) cout << "NO" << endl;
        else cout << BinarySearch(a,0,n-1,k)+1 << endl;
    }
    return 0;
}