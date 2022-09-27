/*  
 * created by shuiyi 
 * on 2022/9/27 23:00
 *
 * https://www.acwing.com/problem/content/830/
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 100010;
int st[maxn], idx = -1;

int main() {

    int n; cin >> n;
    while (n--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x; cin >> x;
            st[++idx] = x;
        }
        if (op == "pop") {
            idx--;
        }
        if (op == "query") {
            cout << st[idx] << endl;
        }
        if (op == "empty") {
            if (idx == -1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

    }
    return 0;
}
