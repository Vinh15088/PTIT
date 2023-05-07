#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n); // vector nhap n phan tu
        vector<int> res(n, -1); // khoi tao vector res dung de check, voi n phan tu bang -1
        stack<int> st;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            while(!st.empty() && a[st.top()] < a[i]){
                res[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        for(auto x:res){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}