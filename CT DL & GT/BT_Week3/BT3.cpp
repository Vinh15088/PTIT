// liệt kê hoán vị của n phần tử
#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n;
int Bool[MAX] = {0}; // danh dau chua co phan tu nao su dung
int a[MAX]; // dung de luu cac hoan vi

void In() {
    for(int i=1; i<=n; i++) cout << a[i] << " ";
    cout << endl;
}

void Try(int k) {
    for(int i=1; i<=n; i++) {
        // kiem tra neu phan tu chua duoc chon thi se danh dau
        if(!Bool[i]) {
            a[k] = i; // luu mmot phan tu vao hoan vi
            Bool[i] = 1; // danh dau da dung
            if(k==n) In(); // kiem tra neu da chua mot hoan vi thi in
            else Try(k+1);
            Bool[i] = 0;
        }
    }
}
int main() {
    cin >> n;
    Try(1);
    return 0;

}