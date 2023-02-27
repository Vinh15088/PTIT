#include<bits/stdc++.h>
using namespace std;

int N, a[10001];

void Print() {
    for(int i=1; i<=N; i++){
        if(a[i]==0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}

void Try(int i) {
    for(int j=0; j<=1; j++){
        a[i] = j; 
        if(i==N) Print();
        else Try(i+1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; 
        Try(1);
        cout << endl;
    }
    return 0;
}