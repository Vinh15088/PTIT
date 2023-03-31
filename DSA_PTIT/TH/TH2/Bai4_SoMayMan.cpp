#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // 2 biến để đếm số số 4 và 7
        int count4 = 0, count7 = 0;
        // 2 biến để lưu số số 4 và 7 tối ưu nhất
        int res4 = 100001, res7 = 100001;

        for(int i=n; i>=0; i--){
            if(n > 4*i && (n-4*i)%7 == 0) {
                // count4 * 4 + count7 * 7 == n
                count4 = i;  // số số 4 có được
                count7 = (n-4*i)/7; // số số 7 có được

                // gán cho res4 = count4, res7 = count7
                // if(res4 + res7 > count4 + count7) {
                //     res4 = count4;
                //     res7 = count7;
                // }

                // xảy ra tường hợp cùng chia được tổng số số 4 và 7 bằng nhau, 
                // nhưng lại có số số 4 ít hơn, cần tối ưu lại biến res4 và res7 để được kết quả nhỏ hơn
                // else if(res4 + res7 == count4 + count7) {
                //     if(res4 > count4) {
                //         res4 = count4;
                //         res7 = count7;
                //     }
                // }
            }
        }
        if(count4*4 + count7*7 != n) cout << -1 << endl;
        else {
            for(int i=0; i<count4; i++) cout << 4;
            for(int i=0; i<count7; i++) cout << 7;
            cout << endl;
        }
    }
    return 0;
}