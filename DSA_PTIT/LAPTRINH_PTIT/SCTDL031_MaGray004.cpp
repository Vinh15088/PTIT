#include<bits/stdc++.h>
using namespace std;

string nhiphan(int n){
    string s = "";
    while(n>0){
        s = to_string(n%2) + s;
        n /= 2;
    }
    return s;
}

string NhiPhantoGray(string s){
    string res(1, s[0]);
    for(int i=1; i<s.length(); i++){
        if(s[i] != s[i-1]) res += '1';
        else res += '0';
    }
    return res;
}

int GrayToNhiPhan(string s){
    int sum = 0;
    int j = s.size() - 1;
    for(int i=0; i<s.size(); i++) {
        if((s[i] - '0') == 1) {
            sum += pow(2,j);
            j--;
        }
        else j--;
    }
    return sum;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // cout << nhiphan(n);
        string s = NhiPhantoGray(nhiphan(n));
        int ans = GrayToNhiPhan(s);
        cout << ans << endl;
    }
    return 0;
}