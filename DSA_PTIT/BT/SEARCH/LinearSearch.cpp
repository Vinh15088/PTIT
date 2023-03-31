#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i] == x) return i;
    }
    return -1;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int x = 5;
    int n = sizeof(a)/sizeof(a[0]);

    if(LinearSearch(a,n,x) == -1) cout << "Not present in array";
    else cout << "Present at index " << LinearSearch(a,n,x);
    return 0;
}