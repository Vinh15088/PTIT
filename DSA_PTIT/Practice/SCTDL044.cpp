#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        priority_queue<int, vector<int>, greater<int>> a;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            a.push(x);
        }
        int res = 0;
        while(a.size() > 1){
            int x = a.top(); a.pop();
            int y = a.top(); a.pop();
            a.push(x+y);
            res += x+y;
        }
        cout << res << endl;
    }
    return 0;
}