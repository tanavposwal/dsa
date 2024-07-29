#include <iostream>
using namespace std;

class Animal {
    
  public:
    int age;
    int weight;

    void bark() {
        cout << "Barking" << endl;
    }

};

class Human {
  public:
    string color;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Hybrid: public Human, public Animal {

};

int main(){

    Hybrid obj1;

    obj1.speak();
    obj1.bark();

    return 0;
}