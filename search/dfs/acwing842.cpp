/*  
 * created by shuiyi 
 * on 2022/9/16 00:40
 *
 * https://www.acwing.com/problem/content/844/
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;
int path[10];
bool vis[10];
int n;
void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) cout << path[i] << " ";
        cout << endl;
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            path[u] = i;
            vis[i] = true;
            dfs(u + 1);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n;
    dfs(0);

    return 0;
}
