#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<long long> q;
        q.push(9);
        while(!q.empty()){
            long long tmp = q.front();
            q.pop();
            if(tmp%n==0){
                cout << tmp << endl;
                break;
            }
            else {
                q.push(tmp*10);
                q.push(tmp*10+9);
            }
        }
    }
    return 0;
}