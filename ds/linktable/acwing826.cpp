/*  
 * created by shuiyi 
 * on 2022/9/16 22:46
 * https://www.acwing.com/problem/content/828/
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;
const int maxn = 100000 + 10;
int head, ne[maxn], e[maxn], idx;
void init() {
    head = -1;
    idx = 0;
}
// 添加到头指针
void add_to_head(int x) {
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
void add(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}
void remove(int k) {
    ne[k] = ne[ne[k]];
}

int main() {

    int m; cin >> m;
    init();
    while (m--) {
        int k, x;
        char op;
        cin >> op;
        if (op == 'H') {
            cin >> x;
            add_to_head(x);
        } else if (op == 'D') {
            cin >> k;
            if (!k) {
                head = ne[head];
            } else {
                remove(k - 1);
            }
        } else {
            cin >> k >> x;
            add(k - 1, x);
        }
    }
    for (int i = head; i != -1; i = ne[i]) cout << e[i] << ' ';
    cout << endl;
    return 0;
}
