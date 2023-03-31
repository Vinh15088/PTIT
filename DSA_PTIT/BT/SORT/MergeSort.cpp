#include<bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], R[n2];

    // copy tu mang a[] sang 2 mang
    for(int i=0; i<n1; i++) L[i] = a[l+i];
    for(int i=0; i<n2; i++) R[i] = a[m+1+i];

    // lan luot la chi so cua mang thu nhat, thu hai va mang hop nhat
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int a[], int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        // chia thanh 2 nua sap xep
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);

        Merge(a,l,m,r);
    }
}

void Print(int a[], int n){
    for(int i=0; i<n; i++) cout << a[i] << " ";
}

int main(){
    int a[] = {100, 10, 4, 55, 32, 86, 95, 15};
    int n = sizeof(a) / sizeof(a[0]);
    Print(a,n);
    cout << endl;
    MergeSort(a,0,n-1);
    Print(a,n);
    return 0;
}