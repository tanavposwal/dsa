#include <iostream>
using namespace std;

// when same function is in different inherited childs
// obj.A::func()


class A {
    public:

    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:

    void func() {
        cout << " I am B" << endl;
    }
};

class C: public A, public B {


};

int main(){

    C obj;
    obj.A::func();
    
    return 0;
}