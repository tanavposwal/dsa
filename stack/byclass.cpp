#include <iostream>
using namespace std;

class Stack {
    private:
        int* arr;
        int top;
        int size;

    public:
        Stack(int size) {
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if (size-top > 1) {
                top++;
                arr[top] = element;
            } else {
                cout << "stack overflow" << endl;
            }
        }

        void pop() {
            if (top >= 0) {
                top--;
            } else {
                cout << "stack underflow" << endl;
            }
        }

        int peek() {
            if (top >= 0) {
                return arr[top];
            } else {
                return -1;
            }
        }

        bool isEmpty() {
            if (top == -1) {
                return true;
            } else {
                return false;
            }
        }
    
};

int main(){
    cout << "hi";
    return 0;
}