// khong the sap xep voi cac phan tu am, hoac voi nhung phan tu qua lon

#include<bits/stdc++.h>
using namespace std;

int Count[1000001];
int Max = INT_MIN;

void CountingSort(int a[], int n){
    for(int i=0; i<n; i++){
        Count[a[i]]++;
        Max = max(Max, a[i]);
    }
    for(int i=0; i<Max; i++){
        if(Count[i] != 0){
            for(int j=0; j<Count[i]; j++) cout << i << " ";
        }
    }
}
int main(){
    int a[] = {100, 15, 48, 30, 6, 2, 10};
    int n = sizeof(a)/sizeof(a[0]);
    CountingSort(a,n);
    return 0;
}
