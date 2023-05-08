#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;

int BFS(int s, int t){
    int a[MAX_N + 1];
    memset(a, -1, sizeof(a));
    queue<int> q;
    q.push(s);
    a[s] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        if(u == t) return a[u];
        if(u-1 >= 0 && a[u-1] == -1){
            a[u-1] = a[u] + 1;
            q.push(u-1);
        }
        if(u*2 <= MAX_N && a[u*2] == -1){
            a[u*2] = a[u] + 1;
            q.push(u*2);
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int S, T; cin >> S >> T;
        cout << BFS(S, T) << endl;
    }
    return 0;
}