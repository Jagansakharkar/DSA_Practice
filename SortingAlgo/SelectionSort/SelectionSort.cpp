#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i; // Find the index of the minimum element
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) { // Compare arr[j] with arr[minIndex]
                minIndex = j; // Update minIndex
            }
        }
        // Swap the found minimum element with the first unsorted element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 12, 4, 5, 2, 16, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    display(arr, n);
    return 0;
}
