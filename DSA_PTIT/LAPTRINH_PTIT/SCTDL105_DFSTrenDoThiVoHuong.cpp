#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
bool check[1001];

// duyet DFS
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
        // xoa het cac gia tri cua ma tran G sau moi test case
        for(int i=0; i<1001; i++) G[i].clear();

        // cho cac gia tri trong check tuong ung voi false
        memset(check, false, sizeof(check));
        
        // khai bao
        int V, E, u; cin >> V >> E >> u;
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