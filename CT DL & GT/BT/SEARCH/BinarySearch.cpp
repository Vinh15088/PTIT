#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int l, int r, int x){
    if(r >= l){
        int m = l +(r-l)/2;
        if(a[m] == x) return m;
        if(a[m] > x) return BinarySearch(a,l,m-1,x);
        return BinarySearch(a,m+1,r,x);
    }
    return -1;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int x = 5;
    int n = sizeof(a)/sizeof(a[0]);

    if(BinarySearch(a,0,n-1,x) == -1) cout << "Not present in array";
    else cout << "Present at index " << BinarySearch(a,0,n-1,x);
    return 0;
}