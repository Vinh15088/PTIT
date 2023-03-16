#include<bits/stdc++.h>
using namespace std;

int n, a[10001];


void Try(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i==n){
            int count = n/2;
            for(int k=1; k<=n; k++){
                if(a[k] == 1) count--;
            }
            if(count == 0) {
                for(int k=1; k<=n; k++){
                    cout << a[k];
                }
                cout << " ";
            }
        }
        else Try(i+1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        if(n%2==1) cout << -1;
        else {
            Try(1);
            cout << endl;
        }
    }
}