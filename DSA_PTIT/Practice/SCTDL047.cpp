#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count4=0, count7=0;

        for(int i=n; i>=0; i--){
            if(n>4*i && (n-4*i)%7==0){
                count4 = i;
                count7 = (n-4*i)/7;
            }
        }

        if(count4*4 + count7*7 != n) cout << "-1" << endl;
        else{
            for(int i=0; i<count4; i++) cout << "4";
            for(int i=0; i<count7; i++) cout << "7";
            cout << endl;
        }
    }
    return 0;
}