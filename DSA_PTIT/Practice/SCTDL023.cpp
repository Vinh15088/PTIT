#include<bits/stdc++.h>
using namespace std;

int N, a[10001], cot[10001], d1[10001], d2[10001];
// cot,d1,d2 de luu cot, hang cheo

int x[1001][1001];
int Count = 0;

void Try(int i){
    for(int j=1; j<=N; j++){
        if(cot[j]==1 && d1[i-j+N]==1 && d2[i+j-1]==1){
            cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
            a[i] = j;
            if(i==N) ++Count;
            else Try(i+1);
            cot[j] = d1[i-j+N] = d2[i+j-1] = 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> N;
        for(int i=1; i<=1001; i++) cot[i]=d1[i]=d2[i]=1;
        Try(1);
        cout << Count << endl;
    }
    return 0;
}