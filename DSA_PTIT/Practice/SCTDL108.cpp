#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
bool check[1001];

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(q.size() > 0){
        int top = q.front(); q.pop();
        check[top] = true;
        cout << top << " ";
        for(int i=0; i<G[top].size(); i++){
            if(!check[G[top][i]]){
                check[G[top][i]] = true;
                q.push(G[top][i]);
            }
        }
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
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}