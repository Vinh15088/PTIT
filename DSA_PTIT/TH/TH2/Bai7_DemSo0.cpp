#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        int count = 0;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x==0) count++;
        }
        cout << count << endl;
    }
    return 0;
}