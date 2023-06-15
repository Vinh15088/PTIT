#include<bits/stdc++.h>
using namespace std;

void Try(string str){
    int pos = str.find('?');
    if(pos == string::npos){
        cout << str << endl;
        return;
    }

    str[pos] = '0'; Try(str);
    str[pos] = '1'; Try(str);
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        Try(s);
    }
    return 0;
}