#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,count = 0; cin >> n;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int tmp = q.front(); q.pop();
            if(tmp <= n){
                count++;
                q.push(tmp*10);
                q.push(tmp*10+1);
            }
            else break;
        }
        cout << count << endl;
    }
    return 0;
}