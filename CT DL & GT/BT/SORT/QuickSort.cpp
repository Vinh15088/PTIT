#include<bits/stdc++.h>
using namespace std;

// Phan hoach Lomuto
int Partition(int a[], int left, int right){
    int pivot = a[right];
    int i = left - 1;
    for(int j=left; j<right; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[right]);
    return i+1;
}


// Phan hoach Hoare
int Partition2(int a[], int left, int right){
    int pivot = a[left];
    int i=left-1, j=right+1;
    while(1){
        do{
            ++i;
        }while(a[i] < pivot);
        do{
            --j;
        }while(a[j] > pivot);
        if(i<j) swap(a[i], a[j]);
        else return j;
    }
}

// Phan hoach Lomuto
void QuickSort(int a[], int left, int right){
    if(left < right){
        int x = Partition(a,left,right);
        QuickSort(a,left,x-1);
        QuickSort(a,x+1,right);
    }
}


// Phan hoach Hoare
void QuickSort2(int a[], int left, int right){
    if(left >= right) return;
    int x = Partition2(a,left,right);
    QuickSort2(a,left,x);
    QuickSort2(a,x+1,right);
}


void Print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[] = {100, 10, 92, 8, 15, 47, 65};
    int n = sizeof(a)/sizeof(a[0]);
    QuickSort2(a,0,n-1);
    Print(a,n);
    return 0;
}
