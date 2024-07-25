#include <iostream>
using namespace std;

void swapx(int &a, int &b) {
    
    int *ptr = new int;

    *ptr = a;
    a = b;
    b = *ptr;

    delete &ptr;

}

int main(){
    int a = 10;
    int b = 12;

    cout << a << " " << b << endl;

    swapx(a,b);

    cout << a << " " << b << endl;

    return 0;
}