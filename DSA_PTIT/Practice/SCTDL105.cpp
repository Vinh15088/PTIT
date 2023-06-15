#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
bool check[1001];

void DFS(int u){
    check[u] = true;
    cout << u << " ";
    for(int i=0; i<G[u].size(); i++){
        if(!check[G[u][i]]) DFS(G[u][i]);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i=0; i<1001; i++) G[i].clear();

        memset(check, false, sizeof(check));

        int V,E,u; cin >> V >> E >> u;
        for(int i=0; i<E; i++){
            int x,y; cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}