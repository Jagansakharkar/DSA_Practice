#include <iostream>
using namespace std;

class Abc
{
public:
  void sort(int arr[], int size)
  {
    for (int i = 0; i < size - 1; i++)
    {
      int minIndex = i;
      for (int j = i + 1; j < size; j++)
      {
        if (arr[j] < arr[minIndex])
        {
          minIndex = j;
        }
        // Swap the found minimum element with the first unsorted element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
      }
    }
  }
  int FindSingleNumber(int arr[], int size)
  {
    sort(arr, size); // Sort the array

    cout << "Sorted array:";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    
    for (int i = 0; i < size; i++)
    {
      if (arr[i] != arr[i + 1])
      {
        return arr[i];
      }
    }
    return -1; // Return -1 if no unique element is found
  }
};

int main()
{
  int size;
  cout << "Enter the size of array you want to insert: ";
  cin >> size;

  int *arr = new int[size];
  cout << "Enter elements into the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  Abc a1;
  int singleNumber = a1.FindSingleNumber(arr, size);
  if (singleNumber != -1)
  {
    cout << "The element that occurs only once is: " << singleNumber << endl;
  }
  else
  {
    cout << "No element occurs only once in the array." << endl;
  }

  delete[] arr; // Clean up dynamically allocated memory

  return 0;
}
