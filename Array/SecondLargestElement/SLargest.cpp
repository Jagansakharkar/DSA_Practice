#include <iostream>
using namespace std;

class Abc {
  int size;
  int *arr;

public:
  // Constructor
  Abc() {
    cout << "Enter the size of array: ";
    cin >> size;
    arr = new int[size]; // Corrected size initialization
  }

  // Destructor to free dynamically allocated memory
  ~Abc() {
    delete[] arr;
  }

  // Method to add elements to the array
  void addElement() {
    cout << "Add elements into the base array: ";
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }
  }

  void sort() {
    int max;
    for (int i = 0; i < size - 1; i++) {
      // Assume the first element is the greatest
      max = i;
      for (int j = i + 1; j < size; j++) {
        // Check for greater element than max
        if (arr[max] < arr[j]) {
          max = j;
        }
      }

      // Swap the elements
      int temp = arr[max];
      arr[max] = arr[i];
      arr[i] = temp;
    }
  }

  void display() const {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  int secondLargest() const {
    if (size < 2) {
      cout << "Array does not have enough elements.";
      return -1; 
    }
    return arr[1]; 
  }
};

int main() {
  Abc a1;
  a1.addElement();
  a1.sort();
  a1.display();
  cout << "Second Largest: " << a1.secondLargest() << endl; // Corrected output statement
  
  return 0;
}
