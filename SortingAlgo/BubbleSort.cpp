#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Outer loop for each pass
        for (int j = 0; j < n - i - 1; j++) { // Inner loop for adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    BubbleSort(arr, n);
    display(arr, n);
    return 0;
}
