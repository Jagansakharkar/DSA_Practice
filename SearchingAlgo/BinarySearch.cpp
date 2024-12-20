#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int b, int target) {
    if (l > b) {
        return -1;
    }

    int mid = l + (b - l) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, b, target);
    } else {
        return binarySearch(arr, l, mid - 1, target);
    }
}

int main() {
    int l = 0, b;
    int target;

    int arr[] = {2, 4, 10, 21, 57};
    b = sizeof(arr) / sizeof(arr[0]) - 1; // Adjust for zero-based indexing

    cout << "Enter element that you want to search: ";
    cin >> target;

    int result = binarySearch(arr, l, b, target);
    if (result == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at: " << result << endl;
    }

    return 0;
}
