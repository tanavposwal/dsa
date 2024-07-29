#include <iostream>
using namespace std;

class Human {
  public:
    int height;
    int weight;

};

class Male: public Human {
  public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main(){

    Male m1;

    cout << m1.weight;

    return 0;
}