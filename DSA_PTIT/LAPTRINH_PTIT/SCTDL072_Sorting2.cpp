// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n,x; cin >> n >> x;
//         int a[n], b[n];
//         for(int i=0; i<n; i++){
//             cin >> a[i];
//             b[i] = abs(x-a[i]);
//         }

//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(b[i] > b[j]){
//                     swap(b[i], b[j]);
//                     swap(a[i],a[j]);
//                 }
//             }
//         }
//         for(int i=0; i<n; i++) cout << a[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b, int x){
    return abs(x-a) < abs(x-b);
}

void solve(int a[], int n, int x){
    int tmp[n];
    for(int i=0; i<n; i++) tmp[i] = abs(x-a[i]);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(compare(tmp[i], tmp[j], x)){
                swap(tmp[i], tmp[j]);
                swap(a[i], a[j]);
            }
        }
    }

    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        solve(a, n, x);
    }
    return 0;
}