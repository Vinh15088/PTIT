#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];
bool check[1001];
int truoc[1001];

void BFS(int u1, int u2){
    queue<int> q;
    q.push(u1);
    while(q.size() > 0){
        int top = q.front(); q.pop();
        check[top] = true;
        if(top == u2) return;
        for(int i=0; i<G[top].size(); i++){
            if(!check[G[top][i]]){
                check[G[top][i]] = true;
                truoc[G[top][i]] = top;
                q.push(G[top][i]);
            }
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
        for(int i=0; i<1001; i++) G[i].clear();
        memset(check, false, sizeof(check));
        memset(truoc, 0, sizeof(truoc));

        int V, E, u1, u2; cin >> V >> E >> u1 >> u2;
        for(int i=0; i<E; i++){
            int x, y; cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        BFS(u1, u2);
        Trace(u2, u1);
        cout << endl;
    }
    return 0;
}