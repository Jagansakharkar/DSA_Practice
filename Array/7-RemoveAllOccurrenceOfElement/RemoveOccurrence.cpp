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

  void removeOccurrence(int ele)
  {
    int newSize = 0;
    for (int i = 0; i < size; i++)
    {
      // Keep all elements which are not equal to ele
      if (arr[i] != ele)
      {
        arr[newSize++] = arr[i];
      }
    }
    size = newSize;
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
  int ele;
  Abc a1;
  a1.addElement();
  a1.display();
  cout << "Enter element whose occurrence you want to delete: ";
  cin >> ele;
  a1.removeOccurrence(ele);
  a1.display();

  return 0;
}
