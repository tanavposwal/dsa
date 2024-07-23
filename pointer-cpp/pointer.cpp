#include <iostream>
using namespace std;

int main() {
    
    int num = 5;

    cout << "num: " << num << endl;
    // there is nothing called (*num)

    // & -> address
    int *pnum = &num;

    cout << "address of num (pnum): " << pnum << endl;
    cout << "value of address pointed by pnum (*pnum): " << *pnum << endl;
    cout << "address of pnum: " << &pnum << endl;

    // size of pointer is size of memory address string (8/4)
    cout << "size of pointer: " << sizeof(pnum) << endl;
    cout << "size of variable: " << sizeof(num) << endl;

    // null pointer 
    int *p = 0;
    // initialize p
    // p = &num;

    int a = 7;
    int b = 9;
    int *ptr = &a;
    cout << "before: " << *ptr << " - " << ptr << endl;
    // updating ptr
    *ptr = b;
    cout << "after: " << *ptr << " - " << ptr << endl;

    return 0;
}
