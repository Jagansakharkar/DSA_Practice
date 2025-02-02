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
    cout << "\nAdd elements into the base array: ";
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  }

  // Method to display the array contents
  void display()
  {
    cout << "\nArray After Updating:\n";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void update(int position, int element)
  {
    for (int i = 0; i < size; i++)
    {
      if (i == position)
      {
        arr[i] = element;
      }
    }
    cout << "\nElement Updated Successfully";
  }
};
int main()
{
  
  int position;
  int element;
  int choice;
  cout << "\nProgram To Update the Array Elements\n";
  Abc a1;
  a1.addElement();

  cout << "\nWant to Update array Element:";
  cout << "\n1 for Yes";
  cout << "\n2 for No";
  cout << "\nEnter Your Choice:";
  cin >> choice;

  cout << "\nEnter position Which element Want to update:";
  cin >> position;

  cout << "\nEnter element want to enter:";
  cin >> element;

  switch (choice)
  {
  case 1:
    a1.update(position, element);
    break;
  case 2:
    cout << "\nThanks for Using";
  default:
    cout << "\nInvalid Choice !";
  }

  return 0;
}