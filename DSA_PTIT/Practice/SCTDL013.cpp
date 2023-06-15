#include<bits/stdc++.h>
using namespace std;

int N,K, a[10001];

void Print(){
    for(int i=1; i<=K; i++){
        cout << a[i];
    }
    cout << " ";
}

void Try(int i){
    for(int j=a[i-1]+1; j<=N-K+i; j++){
        a[i] = j;
        if(i==K) Print();
        else Try(i+1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> N >> K;
        Try(1);
        cout << endl;
    }
}