#include<bits/stdc++.h>
using namespace std;

void Print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

// void BubbleSort(int a[], int n){
//     bool swapped;
//     for(int i=0; i<n-1; i++){
//         swapped = false;
//         for(int j=0; j<n-i-1; j++){
//             if(a[j] > a[j+1]) {
//                 swap(a[j], a[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false) break;
//     }
// }

void BubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}


int main(){
    int a[] = {100, 89, 32, 78, 46, 5, 49, 10};
    int n = sizeof(a)/sizeof(a[0]);
    BubbleSort(a,n);
    Print(a,n);
    return 0;
}