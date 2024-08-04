#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(9);

    s.pop();

    cout << "Top: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    return 0;
}
