#include<bits/stdc++.h>
using namespace std;

string solve(int n) {
    queue<string> q;
    q.push("9");
    while(q.size()) {
        string tmp = q.front(); // cho tmp =  phần tử ở đầu 
        q.pop(); // xóa phần tử đầu của ngăn xếp
        if(stoll(tmp) % n == 0) return tmp;
        q.push(tmp + "0");
        q.push(tmp + "9");
    }
    return "1";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

