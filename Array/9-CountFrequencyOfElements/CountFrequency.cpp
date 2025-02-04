#include <iostream>
#include <vector>
using namespace std;

class Abc
{
public:
  void countFrequency(int arr[], int size)
  {
    vector<bool> isVisited(size, false);

    for (int i = 0; i < size; i++)
    {
      // for count of digits
      int count = 1;

      int element = arr[i];

      // to check element which is already visited or not
      if (isVisited[i])
      {
        continue;
      }

      for (int j = i + 1; j < size; j++)
      {
        if (element == arr[j])
        {
          isVisited[j] = true;
          count++;
        }
      }
      cout << "Element: " << element << " Occurs: " << count << " times" << endl;
    }
  }
};

int main()
{
  int size;
  cout << "Enter the size of array you want: ";
  cin >> size;

  int *arr = new int[size];
  cout << "Add elements into the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  Abc a1;
  a1.countFrequency(arr, size);

  delete[] arr;
  return 0;
}
