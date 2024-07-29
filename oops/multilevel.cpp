#include <iostream>
using namespace std;

class Animal {
    
  public:
    int age;
    int weight;

};

class Dog: public Animal {

};

class GermanShepherd: public Dog {
    
};

int main(){

    return 0;
}