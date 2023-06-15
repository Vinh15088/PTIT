#include<bits/stdc++.h>
using namespace std;

int N, a[10005], check[10005] = {0};

void Print(){
    for(int i=1; i<=N; i++){
        cout << a[i];
    }
    cout << " ";
}

void Try(int i){
    for(int j=1; j<=N; j++){
        if(check[j]==0){
            check[j] = 1;
            a[i] = j;
            if(i == N) Print();
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> N; 
        Try(1);
        cout << endl;
    }
    return 0;
}