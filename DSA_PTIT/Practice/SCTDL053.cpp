#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N,L,R;

ll Length(int n){
    if(n==0||n==1) return 1;
    ll tmp = Length(n/2);
    return 2*tmp+1;
}

ll Count(int n, ll l, ll r){
    if(L<=l && r<=R) return n;
    if(R<l || r<L) return 0;
    ll m = (l+r)/2;
    if(L<=m && m<=R) return Count(n/2,l,m-1) + Count(n/2,m+1,r) + n%2;
    else return Count(n/2,l,m-1)+Count(n/2,m+1,r);
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> N >> L >> R;
        ll res = Count(N,1,Length(N));
        cout << res << endl;
    }
    return 0;
}