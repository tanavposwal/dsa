#include <iostream>
using namespace std;

int main(){
    
    int *ptr = new int;
    // ^heap memory
    cout << ptr << " - " << *ptr << endl; 
    
    int size;
    cin >> size;

    int *arr = new int[size];

    cout << "Memory of array: " << arr << endl;
    
    return 0;
}