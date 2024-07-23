#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n == 0 || n==1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    }
    return isSorted(arr+1, n-1);
}

int main(){

    int arr[6] = {4,3,5,2,6,7};

    if (isSorted(arr, 6)) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}