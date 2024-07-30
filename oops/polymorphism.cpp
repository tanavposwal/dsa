#include <iostream>
using namespace std;

class A {

    public:
    // function overloading
    void sayHello() {
        cout << "hello" << endl;
    }
    void sayHello(string name) {
        cout << "hello" << endl;
    }
    
};

class B {
    public:
    int a;
    int b;

    int add() {
        return a+b;
    }
    // operator overloading
    void operator+ (B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }

    void operator() () {
        cout << "Main Bracket hu " << this->a << endl;
    }
};

// method overiding
class Animal {
    public:
    void speak() {
        cout << "speaking" << endl;
    }
};

class Dog: public Animal {
    public:
    void speak() {
        cout << "Barking" << endl;
    }
};

class Cat: public Animal {
    public:
    void speak() {
        cout << "Meow" << endl;
    }
};

int main(){
    
    // A obj;

    // obj.sayHello();

    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();

    Dog d;
    Cat c;

    d.speak();
    c.speak();

    return 0;
}