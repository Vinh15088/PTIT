// #include<bits/stdc++.h>
// using namespace std;

// int N, a[10001], cot[1001], d1[1001], d2[1001];
// // cot, d1, d2 de danh dau cot, duong cheo xuoi va duong cheo nguoc
// int x[1001][1001];
// int Count = 0;

// void Print(){
//     memset(x, 0, sizeof(x));
//     for(int i=1; i<=N; i++){
//         x[i][a[i]] = 1;
//     }

//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=N; j++){
//             cout << x[i][j];
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// void Try(int i) {
//     for(int j=1; j<=N; j++){
//         if(cot[j]==1 && d1[i-j+N]==1 && d2[i+j-1]==1) {
//             cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
//             a[i] = j;
//             if(i == N) ++Count;
//             else Try(i+1);
//             cot[j] = d1[i-j+N] = d2[i+j-1] = 1;
//         }
//     }
// }

// int main() {
//     int t; cin >> t;
//     while(t--){
//         cin >> N;
//         for(int i=1; i<=1000; i++) cot[i] = d1[i] = d2[i] = 1;
//         Try(1);
//         cout << Count;
//         cout << endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int N, a[10001], cot[1001], d1[1001], d2[1001];
// cot, d1, d2 lan luot de luu cot, hang cheo xuong va hang cheo len

int x[1001][1001];
int Count = 0;

void Print(){
    memset(a, 0, sizeof(a));
    for(int i=1; i<=N; i++){
        if(a[i]) x[i][a[i]] = 1;
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout << x[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

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

int main() {
    int t; cin >> t;
    while(t--){
        cin >> N;
        for(int i=1; i<=1001; i++) cot[i] = d1[i] = d2[i] = 1;
        Try(1);
        cout << Count << endl;
    }
    return 0;
}