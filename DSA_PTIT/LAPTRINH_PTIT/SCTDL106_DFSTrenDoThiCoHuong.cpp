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
        // xoa du du lieu ma tran G sau moi test case
        for(int i=0; i<1001; i++) G[i].clear();

        // khoi tao cac gia tri cua check = false
        memset(check, false, sizeof(check));

        // khai bao
        int V, E, u; cin >> V >> E >> u;
        for(int i=0; i<E; i++){
            int x, y; cin >> x >> y;
            G[x].push_back(y);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}