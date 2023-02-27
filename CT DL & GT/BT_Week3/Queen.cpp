#include<bits/stdc++.h>
using namespace std;

int N;

void In(int a[][]) {
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(a[i][j]) cout << "Q";
            else cout << "0";
        }
        cout << endl;
    }
}

bool check(int a[N][N], int row, int col) {
    int i,j;
    // kiem tra hang nay o phia ben trai
    for(i=0; i<col; i++) {
        if(a[row][i]) return false;
    }

    // kiem tra duong cheo ben trai
    for(i=row, j=col; i>=0 && j>=0; i--, j--) {
        if(a[i][j]) return false;
    }

    // kiem tra duong cheo duoi ben trai
    for(i=row, j=col; j>=0 && i<N; i++, j--) {
        if(a[i][j]) return false;
    }
    return true;
}

bool check_Queen(int a[N][N], int col) {
    // neu tat ca quan hau duoc dat thi tra ve dung
    if(col >= N) return true;

    // xet cot va lan luot dat quan hau vao thu tat ca cac hang
    for(int i=0; i<N; i++){
        if(check(a, i, col)) {
            // dat quan hau vao a[i][col]
            a[i][col] = 1;

            // de quy de dat phan con lai cua cac quan hau
            if(check_Queen(a, col+1)) return true;

            // neu dat quan hau vao cot dang xet ma khong cho loi giai, thi loai bo quan khau khoir cot 
            a[i][col] = 0;
        }
    }
    // neu khong the dat quan hau vao bat ky hang nao trong cot nay, thi tra ve false
    return false;
}

bool solve_Queen() {
    int a[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            a[i][j] = 0;
        }
    }

    if(check_Queen(a,0) == false) {
        cout << "Solution does not exist";
        return false;
    }
    In(a);
    return true;
}


int main(){
    cin >> N;
    solve_Queen();
    return 0;
}