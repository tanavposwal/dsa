#include <iostream>
using namespace std;

// selection sort O(n^2)
void selectionsort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

// bubble sort O(n^2)
void bubblesort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// insertion sort O(n^2)
void insertionsort(int arr[], int size) {
    for(int i = 1; i<size; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {   
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }  
        }
        arr[j+1] = temp;  
    }
}

int main(){
    int arr[7] = {9,3,6,4,7,2,7};

    // sorting algo
    selectionsort(arr, 7);
    bubblesort(arr, 7);
    insertionsort(arr, 7);

    // print 
    cout << "Sorted array: " << endl;
    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}   