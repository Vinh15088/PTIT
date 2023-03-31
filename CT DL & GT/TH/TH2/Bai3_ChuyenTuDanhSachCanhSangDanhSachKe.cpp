#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int v,e; cin >> v >> e;
        vector<int> res[1001];
        while(e--){
            // x,y la 2 dinh cua canh
            int x,y; cin >> x >> y;
            res[x].push_back(y); // tại đỉnh x cho phần tử y vào vector
            res[y].push_back(x); // tại đỉnh y cho phần tử x vào vector
        }

        // xét v đỉnh để đưa ra danh sách kề
        for(int i=1; i<=v; i++){
            cout << "D" << i << ": ";
            // duyệt vector của đỉnh thứ i để in ra các đỉnh kề
            for(auto x:res[i]) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}