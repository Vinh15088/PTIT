#include<bits/stdc++.h>
using namespace std;

int Matrix[1001][1001];
bool Visit[1001];
int count;

int n, m=n-1;

void Try(int u){
    Visit[u] = 1;
    count++;
    for(int i=1; i<=Matrix[u][0]; i++){
        int v = Matrix[u][i];
    }
}