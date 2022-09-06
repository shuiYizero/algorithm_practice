//
// Created by Aqua wang on 2022/9/6.
//
#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *next;

}*head;
int main() {

    for (int i = 0; i < 10; ++i) {
        Node *p = new Node();
        p->val = i;
        p->next = head;
        head = p;
    }
    for (Node * p = head; p; p = p->next) {
        cout << p -> val << " ";
    }
    cout << "\n";


    return 0;

}