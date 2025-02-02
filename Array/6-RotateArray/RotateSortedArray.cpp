#include <iostream>
using namespace std;

class Abc
{
  int size;
  int *arr;
  int d;

public:
  // Constructor
  Abc()
  {
    cout << "Enter the size of array: ";
    cin >> size;

    arr = new int[size];
  }

  // Destructor to free dynamically allocated memory
  ~Abc()
  {
    delete[] arr;
  }

  // Method to add elements to the array
  void addElement()
  {
    cout << "Add elements into the base array: ";
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  }

  void sort()
  {
    // using bubble sort
    for (int i = 0; i < size - 1; i++)
    { // Outer loop for each pass
      for (int j = 0; j < size - i - 1; j++)
      { // Inner loop for adjacent elements
        if (arr[j] > arr[j + 1])
        {
          // Swap arr[j] and arr[j + 1]
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }

  void rotate()
  {
    cout << "\nEnter how many elements you want to rotate: ";
    cin >> d;

    if (d >= size)
    {
      d = d % size; // Reduce unnecessary full rotations
    }

    int *temp = new int[d];

    // Store first d elements in a temp array
    for (int i = 0; i < d; i++)
    {
      temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < size - d; i++)
    {
      arr[i] = arr[i + d];
    }

    // Copy temp array back to end
    for (int i = 0; i < d; i++)
    {
      arr[size - d + i] = temp[i];
    }

    delete[] temp; // Free the temporary array
  }

  void display()
  {
    cout << "\nArray: ";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Abc a1;
  a1.addElement();
  a1.sort();
  a1.display();

  a1.rotate();
  a1.display();
}
