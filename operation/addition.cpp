#include <iostream>
using namespace std;

int main(){

    int i = 10;

    cout << "i++: " << i++ << endl;
    cout << "i: " << i << endl;

    i = 10;

    cout << "++i: " << ++i << endl;
    cout << "i: " << i << endl;

    int a;
    // a is defined with any random value
    
    cout << a << endl;
    cout << &a << " - " << a << endl;

    return 0;
}