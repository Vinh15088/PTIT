#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Hàm tìm kiếm chuỗi trong chuỗi bằng thuật toán KMP
vector<int> kmp(string const& s, string const& pat) {
    int n = s.size(), m = pat.size();
    vector<int> fail(m, -1);
    for (int i = 1, j = -1; i < m; i++) {
        while (j >= 0 && pat[j + 1] != pat[i]) j = fail[j];
        if (pat[j + 1] == pat[i]) j++;
        fail[i] = j;
    }
    vector<int> ret;
    for (int i = 0, j = -1; i < n; i++) {
        while (j >= 0 && pat[j + 1] != s[i]) j = fail[j];
        if (pat[j + 1] == s[i]) j++;
        if (j == m - 1) {
            ret.push_back(i - m + 1);
            j = fail[j];
        }
    }
    return ret;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string x;
        cin >> n >> k >> x;

        // Tìm kiếm số lần xuất hiện của chuỗi "01" trong chuỗi đầu vào
        auto matches = kmp(x, "01");
        int m = matches.size();

        // Tạo ra danh sách các chuỗi Y
        vector<string> ys;
        for (int i = 0; i < m; i++) {
            string y = x;
            y.insert(matches[i] + 2, k, '0');
            ys.push_back(y);
        }

        // Loại bỏ các chuỗi trùng với chuỗi đầu vào hoặc các chuỗi Y đã tạo ra trước đó
        vector<string> z;
        for (auto const& y : ys) {
            if (y != x && find(z.begin(), z.end(), y) == z.end()) {
                z.push_back(y);
            }
        }

        // Chọn ra K chuỗi đầu tiên trong danh sách các chuỗi Y đã loại bỏ trùng lặp
        int z_size = z.size();
        for (int i = 0; i < k && i < z_size; i++) {
            cout << z[i] << endl;
        }
    }
    return 0;
}