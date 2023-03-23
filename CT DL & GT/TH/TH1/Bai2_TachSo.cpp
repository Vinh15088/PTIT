#include<bits/stdc++.h>
using namespace std;

void Try(int n, int k, vector<int> a){
    if(k==0) {
        cout << "(";
        for(int i=0; i<a.size()-1; i++) cout << a[i];
        cout << a.back() << ")";
    }
    for(int i=n; i>=1; i--){
        if(k>=i){
            a.push_back(i);
            Try(i,k-i,a);
            a.pop_back();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Try(n,n,{});
        cout << endl;
    }
    return 0;
}