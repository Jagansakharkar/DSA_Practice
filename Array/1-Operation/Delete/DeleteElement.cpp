#include <iostream>
using namespace std;

class Abc {
  int size;
  int *arr;

public:
  Abc() {
    // get the size of array
    cout << "\nEnter the size of array: ";
    cin >> size;
    arr = new int[size];
  }

  // Deallocate memory in the destructor
  ~Abc() {
    delete[] arr;
  }

  // add element into the array
  void addElementIntoArray() {
    cout << "\nAdd elements into the array: ";
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }
  }

  void display() {
    cout << "\nArray: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void deleteElement(int position) {
    if (position < 1 || position > size) {
      cout << "\nInvalid position!" << endl;
      return;
    }

    for (int i = position; i < size; i++) {
      arr[i - 1] = arr[i];
    }
    size -= 1;
    cout << "\nElement Deleted Successfully!" << endl;
  }
};

int main() {
  int position;
  cout << "Code to Delete Element from Array" << endl;
  Abc a1;
  a1.addElementIntoArray();
  a1.display();
  cout << "\nEnter the position of the element you want to delete: ";
  cin >> position;
  a1.deleteElement(position);
  a1.display();
  
  return 0;
}
