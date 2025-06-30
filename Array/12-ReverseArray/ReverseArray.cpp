#include <iostream>
using namespace std;

class Reverse
{
public:
  int* reverseArr(int arr[], int size) 
  {
    int* newArr = new int[size];
    for (int j = size - 1; j >= 0; j--)
    {
      newArr[size - 1 - j] = arr[j]; 
    }
    return newArr; 
  }
};

int main()
{
  int arr[] = {1, 4, 3, 2, 6, 5};
  int size = 6;

  Reverse a1;
  int* reversedArr = a1.reverseArr(arr, size);

  for (int i = 0; i < size; i++)
  {
    cout << reversedArr[i] << " ";
  }

  delete[] reversedArr; // Free allocated memory

  return 0;
}
