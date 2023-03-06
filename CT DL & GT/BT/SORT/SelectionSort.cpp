#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int Min_pos = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[Min_pos]) Min_pos = j;          
        }
        swap(a[Min_pos], a[i]);
    }
}

void Print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[] = {100, 89, 10, 45, 32, 44};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a,n);
    Print(a,n);
    return 0;
}