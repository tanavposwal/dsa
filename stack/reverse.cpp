#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    // call
    insertAtBottom(s, x);

    s.push(num);
}

void solve(stack<int> &s) {
    int num;
    if (s.empty()) {
        return;
    }
    num = s.top();
    s.pop();
    solve(s);
    insertAtBottom(s, num);
    num = NULL;

}

void reverseStack(stack<int> &stack) {
    solve(stack);
}