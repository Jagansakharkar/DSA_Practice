// Online C++ compiler to run C++ program online
#include <iostream>

int main()
{
  // Write C++ code here
  std::cout << "Try programiz.pro";
  int arr[] = {-1, -2, -3, 4, 5, 6, 7};
  int d = 2;
  int temparr[d];
  int size = 7;

  int n = arr.size(); // Correct array size
  d = d % n;          // Handle cases where d > n

  vector<int> temp(d);
  // Store first d elements
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }

  // Shift the remaining elements
  for (int j = d; j < n; j++)
  {
    arr[j - d] = arr[j];
  }

  // Copy temp back to the end
  for (int i = 0; i < d; i++)
  {
    arr[n - d + i] = temp[i];
  }

  std::cout << "/narray";
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
  return 0;
}