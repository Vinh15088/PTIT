#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; string s;
        cin >> k >> s;
        for(int i=0; i<s.size(); i++){
            // gán giá trị Max sẽ là phần tử cuối cùng trong string s
            // và vị trí pos ứng với giá trị Max trong string s
            char Max = s[s.size()-1];
            int pos = s.size()-1;
            for(int j=s.size()-1; j>i && k>0; j--){
                // k > 0 để tránh trường hợp đã thỏa mãn đổi chỗ k vị trí
                // j > i: sau khi hoán đổi giá trị Max lên vị trí i, thì sẽ bỏ qua vị trí i
                if(s[j] > Max){
                    Max = s[j];
                    pos = j;
                }
            }
            if(s[i] < Max && k > 0){
                swap(s[i], s[pos]);
                k--;
            }
        }
        cout << s << endl;
    }
    return 0;
}