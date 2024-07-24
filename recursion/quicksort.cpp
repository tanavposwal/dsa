#include <iostream>
using namespace std;

// average case 

int partition(int arr[], int s, int e) {
    // by default pivot is starting number
    int pivot = arr[s];
    int cnt = 0;

    // find number greater than pivot in arr
    for (int i = s+1; i <= e ; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i<pivotIndex && j>pivotIndex) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;   
        }
        if (i<pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    
}

void quickSort(int arr[], int s, int e) {
    if (s>=e) {
        return;
    }

    int p = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p-1);

    // right part sort karo
    quickSort(arr, p+1, e);
}

int main(){
    
    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
