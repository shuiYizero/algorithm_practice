/*  
 * created by shuiyi 
 * on 2022/9/27 21:43
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;
const int maxn = 100000 + 10;
int M;
int lp[maxn], rp[maxn], idx;
int e[maxn];

// 在节点p右边插入
void insert(int k, int x) {
    e[idx] = x;
    lp[idx] = k, rp[idx] = rp[k];
    lp[rp[k]] = idx, rp[k] = idx;
    idx++;

}

// 删除节点
void remove(int k) {
    lp[rp[k]] = lp[k];
    rp[lp[k]] = rp[k];

}
int main() {
    rp[0] = 1, lp[1] = 0;
    idx = 2;
    cin >> M;
    while (M--) {
        string op; cin >> op;

        if (op ==  "L") {
            int x; cin >> x;
            insert(0, x);
        }
        if (op == "R") {
            int x; cin >> x;
            insert(lp[1], x);
        }
        if (op == "D") {
            int k;cin >> k;
            remove(k + 1);
        }
        if (op == "IL") {
            int k, x; cin >> k >> x;
            insert(lp[k + 1], x);
        }
        if (op == "IR") {
            int k, x; cin >> k >> x;
            insert(k + 1, x);
        }
    }
    for (int i = rp[0]; i != 1; i = rp[i]) {
        cout << e[i] << " ";
    }
    cout << "\n";
    return 0;
}
