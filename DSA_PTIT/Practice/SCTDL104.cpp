#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> G[1001];
        int V,E; cin >> V >> E;
        for(int i=0; i<E; i++){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
        }
        for(int i=1; i<=V; i++){
            cout << i << ": ";
            for(auto x:G[i]) cout << x << " ";
            cout << endl;
        }
        
    }
    return 0;
}