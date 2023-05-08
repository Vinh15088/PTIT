#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> kToL(vector<vector<int>> matrix) {
    int n = matrix.size();
    vector<vector<int>> result(n, vector<int>(n, 0));

    // Sao chép ma trận kề sang ma trận liên thuộc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix[i][j];
        }
    }

    // Áp dụng thuật toán Floyd-Warshall để tìm đường đi ngắn nhất giữa các cặp đỉnh
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (result[i][k] && result[k][j]) {
                    result[i][j] = 1;
                }
            }
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "Nhap ma tran ke: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> result = kToL(matrix);

    cout << "Ma tran lien thuoc tuong ung:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
