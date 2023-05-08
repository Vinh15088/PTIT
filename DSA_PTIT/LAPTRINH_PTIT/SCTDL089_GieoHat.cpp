#include<bits/stdc++.h>
using namespace std;

const int MAX = 501;
int a[MAX][MAX];
bool visited[MAX][MAX];

int main(){
    int t; cin >> t;
    while(t--){
        int r,c; cin >> r >> c;

        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }

        // khoi tao hang doi va dua cac o chua cay non vao hang doi
        queue<pair<int, int>> q;
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                if(a[i][j] == 2){
                    q.push(make_pair(i,j));
                    visited[i][j] = true;
                }
            }
        }

        // duyet hang doi va lan truyen chat dinh duong
        int day = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if(a[x][y] == 1){
                    visited[x][y] = true;
                    a[x][y] = day+1;
                }

                if(x > 1 && a[x-1][y] == 1 && !visited[x-1][y]){
                    q.push(make_pair(x-1, y));
                    visited[x-1][y] = true;
                }
                if(x < r && a[x+1][y] == 1 && !visited[x+1][y]){
                    q.push(make_pair(x+1,y));
                    visited[x+1][y] = true;
                }
                if(y > 1 && a[x][y-1] == 1 && !visited[x][y-1]){
                    q.push(make_pair(x, y-1));
                    visited[x][y-1] = true;
                }
                if(y < c && a[x][y+1] == 1 && !visited[x][y+1]){
                    q.push(make_pair(x, y+1));
                    visited[x][y+1] = true;
                }
            }
            day++;
        }

        // kiem tra xem con o nao chua nay mam
        bool flag = true;
        int ans = 0;
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                if(a[i][j] == 1){
                    flag = false;
                    break;
                }
                if(a[i][j] > ans) ans = a[i][j];
                if(!flag) break;
            }
        }

        // in kqua
        if(flag) cout << day-1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}



// cach khac 
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAX_R = 500;
const int MAX_C = 500;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int A[MAX_R][MAX_C];
bool visited[MAX_R][MAX_C];

int bfs(int R, int C) {
    int days = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (A[i][j] == 2) {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            auto [x, y] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx >= 0 && nx < R && ny >= 0 && ny < C && A[nx][ny] == 1 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        if (!q.empty()) {
            days++;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (A[i][j] == 1 && !visited[i][j]) {
                return -1;
            }
        }
    }
    return days;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        memset(A, 0, sizeof(A));
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> A[i][j];
            }
        }
        int result = bfs(R, C);
        cout << result << endl;
    }
    return 0;
}