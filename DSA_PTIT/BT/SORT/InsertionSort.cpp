#include<bits/stdc++.h>
using namespace std;

void Print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

void InsertionSort(int a[], int n){
    int tmp;
    for(int i=1; i<n; i++){
        tmp = a[i];
        int j = i-1;
        while(j>=0 && a[j] > tmp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
}

int main(){
    int a[] = {100, 49, 63, 75, 10, 15};
    int n = sizeof(a)/sizeof(a[0]);
    InsertionSort(a,n);
    Print(a,n);
    return 0;
}