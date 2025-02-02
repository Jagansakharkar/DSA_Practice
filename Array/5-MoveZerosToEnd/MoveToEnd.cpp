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

    if (size < 3)
    {
      cout << "To calculate product of triplet array must have three elements" << endl;
      arr = nullptr;
    }
    else
    {
      arr = new int[size];
    }
  }

  // Destructor to free dynamically allocated memory
  ~Abc()
  {
    if (arr != nullptr)
    {
      delete[] arr;
    }
  }

  // Method to add elements to the array
  void addElement()
  {
    if (arr == nullptr)
    {
      return;
    }
    cout << "Add elements into the base array: ";
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  }

  // move zero to end of array
  void moveToEnd()
  {
    if (arr == nullptr)
    {
      return;
    }

    int end = size - 1;
    int i = 0;
    while (i < end)
    {
      if (arr[i] == 0)
      {
        // Move elements to the left
        for (int j = i; j < end; j++)
        {
          arr[j] = arr[j + 1];
        }
        arr[end] = 0; // Place zero at the end
        end--;
      }
      else
      {
        i++;
      }
    }
  }

  // Display the array
  void display()
  {
    if (arr == nullptr)
    {
      return;
    }
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
  a1.display();
  a1.moveToEnd();
  a1.display();

  return 0;
}
