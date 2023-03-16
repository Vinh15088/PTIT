#include<bits/stdc++.h>
using namespace std;

int a[10001][10001], n;
void Print();
void Try(int i){
    for(int j=0; j<=1; j++){
        // a[i] = j;
        if(i==n) Print();
        else Try(i+1);
    }
}
int main() {
    int t; cin >> t;
    while(t--){
        string s;
        cin.ignore();
        cin >> s;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '?') count++;
        }
        int cot = pow(2,count);
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<cot; j++){
                if(s[i] != '?') a[i][j] = stol(s[i]);
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}

// chua AC