#include<bits/stdc++.h>
using namespace std;

void Heapify(int a[], int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && a[l] > a[largest]) largest = l;
    if(r<n && a[r] > a[largest]) largest = r;
    if(largest != i) {
        swap(a[i], a[largest]);
        Heapify(a,n,largest);
    }
}

void HeapSort(int a[], int n){
    // xay dung max heap; tai nhung nut khong phai lá
    for(int i=n/2 - 1; i>=0; i--) Heapify(a,n,i);

    // xet tu chi so cuoi cung, 
    for(int i=n-1; i>0; i--) {
        swap(a[0], a[i]);
        // de cap nhat lai, bo qua truong hop cuoi cung vua xet
        Heapify(a,i,0);
    }
}

void Print(int a[], int n){
    for(int i=0; i<n; i++) cout << a[i] << " ";
}

int main(){
    int a[] = {100, 10, 64, 13, 8, 93, 4};
    int n = sizeof(a)/sizeof(a[0]);
    HeapSort(a,n);
    Print(a,n);
    return 0;
}