#include<bits/stdc++.h>
using namespace std;

int getInvCount(int a[], int n){
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int a[] = {8,4,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout << getInvCount(a,n);

    return 0;
}