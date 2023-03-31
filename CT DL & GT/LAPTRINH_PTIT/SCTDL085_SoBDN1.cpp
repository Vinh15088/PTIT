#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        int count = 0;
        queue<long long> q;
        q.push(1);
        while(!q.empty()){
            long long tmp = q.front();
            q.pop();
            if(tmp<=n) {
                count++;
                q.push(10*tmp);
                q.push(10*tmp+1);
            }
            else break;
        }
        cout << count << endl;
    }
    return 0;
}