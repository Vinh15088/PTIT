#include<bits/stdc++.h>
using namespace std;

int n, k, a[10001];

void Print() {
    for(int i=1; i<=k; i++){
        cout << a[i];
    }
    cout << " ";
}

// i lon nhat nhat co the dat duoc la n-k+i
// gia tri i phu thuoc vao a[i-1]+1
void Try(int i) {
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i==k) Print();
        else Try(i+1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
    return 0;
}