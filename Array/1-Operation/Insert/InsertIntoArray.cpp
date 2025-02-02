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

  // Method to insert element at the beginning
  void insertIntoBeginning(int element)
  {
    size += 1;
    for (int i = size - 1; i > 0; i--)
    {
      arr[i] = arr[i - 1];
    }
    // Add element at the beginning
    arr[0] = element;
    cout << "Element Added Successfully: ";
  }

  // Method to insert element at the end
  void insertIntoEnd(int element)
  {
    // add element
    arr[size] = element;
    // increase size
    size += 1;

    cout << "Element Added Successfully: ";
  }

  void insertOnPosition(int position, int element)
  {
    // check for valid position
    if (position < 1 || position > size + 1)
    {
      cout << "Invalid position!\n";
      return;
    }
    // increase size of array
    size += 1;

    // shift elements
    for (int i = size; i >= position; i--)
    {
      arr[i] = arr[i - 1];
    }
    // insert element
    for (int i = 0; i < size; i++)
    {
      if (i == position - 1)
      {
        arr[i] = element;
      }
    }
  }
  // Method to display the array contents
  void display()
  {
    cout << "\nArray After Inserting:\n";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  int choice;
  int element;
  int position;
  cout << "Code for Insert Element Into Array\n";
  Abc a1;
  a1.addElement();

  cout << "1 for At Begineening:\n";
  cout << "2 for At End:\n";
  cout << "3 for At Given Index\n";
  cout << "Insert Your Choice\n";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "Enter element want to add:";

    cin >> element;
    a1.insertIntoBeginning(element);
    a1.display();

    break;
  case 2:
    cout << "Enter element want to add:";

    cin >> element;
    a1.insertIntoEnd(element);
    a1.display();

    break;
  case 3:
    cout << "Enter element want to add:";

    cin >> element;
    cout << "Enter position on which want to insert:";
    cin >> position;
    a1.insertOnPosition(position, element);
    a1.display();

    break;
  default:
    cout << "Invalid Choice !";
  }

  return 0;
}
