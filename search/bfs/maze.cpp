//
// Created by Aqua wang on 2022/9/7.
// acwing 844走迷宫
// https://www.acwing.com/problem/content/846/
//
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 110;
int n, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int mps[MAXN][MAXN];
int vis[MAXN][MAXN];

void bfs() {
    memset(vis, 0, sizeof(vis));
    queue<pair<int, int> > que;
    que.push({0, 0});
    vis[0][0] = 0;
    while (!que.empty()) {
        pair<int, int> u = que.front();
        que.pop();
        for (int i = 0; i < 4; ++i) {
            int xx = u.first + dx[i];
            int yy = u.second + dy[i];
            if (xx >= 0 && xx < n && yy >= 0 && yy < m && vis[xx][yy] == 0 && mps[xx][yy] == 0) {
                vis[xx][yy] = vis[u.first][u.second] + 1;
                que.push({xx, yy});

            }
        }

    }
    cout << vis[n - 1][m - 1] << endl;
}

int main() {

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mps[i][j];
        }
    }
    bfs();

    return 0;
}