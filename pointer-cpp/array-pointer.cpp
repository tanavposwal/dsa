#include <iostream>
using namespace std;
int main(){

    int arr[4] = {1, 2, 3, 4};

    cout << arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr+1) << " - " << arr[1] << " - " << 1[arr] << endl;

    // arr[i] -> *(arr + i)
    
    cout << &arr[0] << " - " << &arr << endl;
    
    int *p = &arr[0];

    cout << p << " - " << &arr[0];

    return 0;
}