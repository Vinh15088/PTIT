#include<bits/stdc++.h>
using namespace std;

int n, a[10001];


void Try(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i==n){
            int count = n/2;
            for(int k=1; k<=n; k++){
                if(a[k] == 1) count--;
            }
            if(count == 0) {
                for(int k=1; k<=n; k++){
                    cout << a[k];
                }
                cout << " ";
            }
        }
        else Try(i+1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        if(n%2==1) cout << -1;
        else {
            Try(1);
            cout << endl;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;

void generateBinaryStrings(int n, string str) {
    if (n % 2 != 0 || n == 0) { // nếu n không chia hết cho 2
        cout << "-1" << endl; // in ra -1
        return;
    }
    if (str.length() == n) { // nếu độ dài chuỗi bằng n
        cout << str << " "; // in ra chuỗi nhị phân
        return;
    }
    string halfStr(n/2, '0'); // tạo chuỗi nhị phân có n/2 số 0
    halfStr.append(n/2, '1'); // thêm n/2 số 1 vào cuối chuỗi
    do {
        string newStr = str + halfStr; // ghép chuỗi mới
        generateBinaryStrings(n, newStr); // gọi đệ quy
    } while (next_permutation(halfStr.begin(), halfStr.end())); // sinh ra các chuỗi nhị phân có n/2 số 0 và n/2 số 1 theo thứ tự khác nhau
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        generateBinaryStrings(n, ""); // tạo ra chuỗi ban đầu
        cout << endl;
    }  
    return 0;
}