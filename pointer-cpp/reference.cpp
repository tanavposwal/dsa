#include <iostream>
using namespace std;


int main(){

    int a = 5;

    int *ptr = &a;

    cout << "value of a before " << a << endl;

    (*ptr)++;

    cout << "value of a after " << a << endl;

    // copying a pointer
    int *p = ptr;

    cout << ptr << " - " << p << endl;
    cout << *ptr << " - " << *p << endl;

    return 0;
}