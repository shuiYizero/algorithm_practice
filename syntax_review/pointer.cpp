//
// Created by Aqua wang on 2022/9/6.
//

#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int *p = &a;
    *p += 10;

    cout << *p << "\n";

    return 0;
}