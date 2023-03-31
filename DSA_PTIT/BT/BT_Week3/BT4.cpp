#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll Sum_Array(int a[10001], int n) {
    if(n==1) return a[0];
    return a[n-1] + Sum_Array(a, n-1);
}

ll Mul_Array(int a[10001], int n) {
    if(n==1) return a[0];
    return a[n-1]*Mul_Array(a, n-1);
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    cout << Sum_Array(a,n) << " " << Mul_Array(a,n);
    return 0;
}