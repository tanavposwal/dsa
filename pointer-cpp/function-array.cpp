#include <iostream>
using namespace std;

int getArray(int arr[], int n) {
    
    /*
        here arr is pointer of first element in array
    */

    cout << sizeof(arr) << endl;
    // warning: ‘sizeof’ on array function parameter ‘arr’ will return size of ‘int*’

    int sum = 0; 
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main(){
    
    int arr[5] = {12,23,34,45,56};

    cout << getArray(arr, 5) << endl;

    return 0;
}