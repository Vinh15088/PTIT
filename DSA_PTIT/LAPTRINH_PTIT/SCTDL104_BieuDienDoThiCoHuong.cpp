#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int V, E; cin >> V >> E;
        vector<int> res[1001];
        for(int i=0; i<E; i++){
            int x, y; cin >> x >> y;
            res[x].push_back(y);
        }

        for(int i=1; i<=V; i++){
            cout << i << ": ";
            for(auto x:res[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}