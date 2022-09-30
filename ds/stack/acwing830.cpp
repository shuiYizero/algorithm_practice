/*  
 * created by shuiyi 
 * on 2022/9/28 19:00
 * https://www.acwing.com/problem/content/832/
 * // 单调栈
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 1e5 + 10;

int st[maxn], idx = -1;

int main() {
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        if (idx > -1) {
            while (x <= st[idx]) idx--;
        }
        if (idx == -1) {
            cout << -1 << " ";
        } else {
            cout << st[idx] << " ";
        }
        st[++idx] = x;
    }
    return 0;
}
