#include<bits/stdc++.h>
using namespace std;

int n; 
vector<string> S;

void Try(int k, int sum, string s){
    for(int i=k; i>=1; i--){
        if(sum == n) {
            s.pop_back();
            S.push_back("(" + s + ")");
            return;
        }
        else if(sum < n) Try(i, sum+i, s + to_string(i));
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        S.clear();
        Try(n, 0, "");
        for(auto c:S) cout << c;
        cout << endl;
    }
}