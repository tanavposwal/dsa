#include <iostream>
using namespace std;

// class Sample {
//     int a;
//     int b;
//     public:
//         void setValue() {a = 25; b = 40;}
//         friend float mean(Sample s);
// };

// float mean(Sample s) {
//     return float(s.a + s.b) / 2.0;
// }

class class2;

class class1 {
    int value1;
    public:
        void indata(int a) { value1 = a; }
        void display() { cout << value1 << endl; }
        friend void exchange(class1&, class2&);
};

class class2 {
    int value2;
    public:
        void indata(int a) { value2 = a; }
        void display() { cout << value2 << endl; }
        friend void exchange(class1&, class2&);
};

void exchange(class1& x, class2& y) {
    swap(x.value1, y.value2);
}

int main(){
    class1 C1;
    class2 C2;

    C1.indata(100);
    C2.indata(200);

    cout << "Values before swap " << endl;
    C1.display();
    C2.display();

    exchange(C1, C2);

    cout << "Values after swap " << endl;
    C1.display();
    C2.display();

    return 0;
}