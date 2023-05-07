#include<bits/stdc++.h>
using namespace std;

void generateBinaryStrings(string str) {
    int pos = str.find('?'); // tìm vị trí của dấu "?" đầu tiên trong chuỗi
    if (pos == string::npos) { // nếu không còn dấu "?" nào trong chuỗi
        cout << str << endl; // in ra chuỗi nhị phân
        return;
    }
    str[pos] = '0'; // thay thế dấu "?" đầu tiên bằng "0"
    generateBinaryStrings(str); // gọi đệ quy với chuỗi mới
    str[pos] = '1'; // thay thế dấu "?" đầu tiên bằng "1"
    generateBinaryStrings(str); // gọi đệ quy với chuỗi mới
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        generateBinaryStrings(s);
    }
    return 0;
}