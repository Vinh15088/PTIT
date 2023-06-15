#include<bits/stdc++.h>
using namespace std;

string sum(string a, string b){
    while(a.size() > b.size()) b = '0' + b;
    while(b.size() > a.size()) a = '0' + a;
    string res = "";
    int carry = 0;
    for(int i=a.size()-1; i>=0; i--){
        int tmp = (a[i]-'0') + (b[i]-'0') + carry;
        res = char(tmp%10 + '0') + res;
        carry = tmp/10;
    }
    if(carry>0) res = char(carry + '0') + res;
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;
        for(int i=0; i<a.size(); i++){
            if(a[i]=='5') a[i] = '3';
        }
        for(int i=0; i<b.size(); i++){
            if(b[i]=='5') b[i] = '3';
        }
        cout << sum(a,b) << " ";

        for(int i=0; i<a.size(); i++){
            if(a[i]=='3') a[i] = '5';
        }
        for(int i=0; i<b.size(); i++){
            if(b[i]=='3') b[i] = '5';
        }
        cout << sum(a,b) << endl;
    }
    return 0;
}