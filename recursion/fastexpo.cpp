#include <iostream>
using namespace std;

int expo(int b, int p) {
    if (p == 0) return 1;
    if (p == 1) return b;

    if (b % 2 == 0) {
        return expo(b,p/2)*expo(b,p/2);
    } else {
        return b*expo(b,p/2)*expo(b,p/2);
    }
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << endl;

    cout << "answer is: " << expo(a, b) << endl;

    return 0;
}
