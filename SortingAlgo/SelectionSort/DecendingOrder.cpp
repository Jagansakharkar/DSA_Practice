#include <iostream>
using namespace std;

class Abc
{
  int size;
  int *arr;

public:
  // Constructor
  Abc()
  {
    cout << "Enter the size of array: ";
    cin >> size;
    arr = new int[size + 1];
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
  // display array
  void display()
  {
    cout << "\nArray\n";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
  }

  // sort
  void sort()
  {
    int max;
    for (int i = 0; i < size - 1; i++)
    {
      // make first element greater
      max = i;
      for (int j = i + 1; j < size; j++)
      {
        // check for greater element than max
        if (arr[max] < arr[j])
        {
          max = j;
        }
      }

      // swap temp
      int temp = arr[max];
      arr[max] = arr[i];
      arr[i] = temp;
    }
  }
};
int main()
{
  Abc a1;
  a1.addElement();
  a1.display();
  a1.sort();
  a1.display();
  return 0;
}