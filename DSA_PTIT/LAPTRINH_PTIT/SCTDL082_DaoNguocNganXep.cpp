#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>& s){
    if(s.empty()) return;
    int x = s.top(); s.pop();
    reverseStack(s);
    s.push(x);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        stack<int> s;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            s.push(x);
        }

        // dao nguoc 
        reverseStack(s);
        while(!s.empty()){
            cout << s.top() << " "; s.pop();
        }
        cout << endl;
    }

    return 0;
}