// tim max cua chuoi
#include<bits/stdc++.h>
using namespace std;

int Max(int a[], int n) {
    if(n==1) return a[0];
    int tmpMax = Max(a, n-1);
    if(tmpMax > a[n-1]) return tmpMax;
    else return a[n-1];
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    cout << Max(a, n) << endl;
    return 0;
}
