#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x != 0) a.push_back(x);
        }
        sort(a.begin(), a.end());
        long long sum1 = 0, sum2 = 0;
        for(int i=0; i<a.size(); i++){
            if(i%2==0) sum1 = sum1*10 + a[i];
            else sum2 = sum2*10 + a[i];
        }
        cout << sum1 + sum2 << endl;
    }
    return 0;
}