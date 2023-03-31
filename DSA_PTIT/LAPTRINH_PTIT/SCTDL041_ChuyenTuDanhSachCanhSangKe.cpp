#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int v,e; cin >> v >> e;
        vector<int> res[1001];
        for(int i=0; i<e; i++){
            int x,y; cin >> x >> y;
            res[x].push_back(y);
            res[y].push_back(x);
        }

        for(int i=1; i<=v; i++){
            cout << "D" << i << ": ";
            for(auto x:res[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}