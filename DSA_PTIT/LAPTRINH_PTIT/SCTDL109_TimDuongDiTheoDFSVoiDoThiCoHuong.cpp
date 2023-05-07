#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
bool check[1001];
int truoc[1001];

void DFS(int u1, int u2){
   if(check[u2]) return;
   check[u1] = true;
   for(int i=0; i<G[u1].size(); i++){
        if(!check[G[u1][i]]){
            truoc[G[u1][i]] = u1;
            DFS(G[u1][i], u2);
        }
    }
}

void Trace(int u, int v){
    if(!check[v]){
        cout << -1;
        return;
    }
    vector<int> a;
    while(u!=v){
        a.push_back(u);
        u = truoc[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout << a[i] << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        // xoa du lieu ma tran G sau moi test case
        for(int i=0; i<1001; i++) G[i].clear();

        // khoi tao cac gia tri cua check = false, truoc = 0
        memset(check, false, sizeof(check));
        memset(truoc, 0, sizeof(truoc));

        // khai bao
        int V, E, u1, u2; cin >> V >> E >> u1 >> u2;
        for(int i=0; i<E; i++){
            int x, y; cin >> x >> y;
            G[x].push_back(y);
        }
        DFS(u1, u2);
        Trace(u2, u1);
        cout << endl;
    }
    return 0;
}