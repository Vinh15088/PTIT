#include<bits/stdc++.h>
using namespace std;

string thapPhanToNhiPhan(int n){
    string s = "";
    while(n>0){
        s = to_string(n%2) + s;
        n /= 2;
    }
    return s;
}

string nhiPhanToGray(string s){
    string res = string(1, s[0]);
    for(int i=1; i<s.length(); i++){
        if(s[i] != s[i-1]) res += '1';
        else res += '0';
    }
    return res;
}

int grayToThapPhan(string s){
    int sum = 0;
    int j = s.size()-1;
    for(int i=0; i<s.size(); i++){
        if((s[i]-'0') == 1) {
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
        string s = nhiPhanToGray(thapPhanToNhiPhan(n));
        cout << grayToThapPhan(s) << endl;
    }
    return 0;
}