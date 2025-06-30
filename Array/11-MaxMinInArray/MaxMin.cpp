#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3, 2, 1, 56, 10000, 167};

  int size = 6;
  int min = arr[0];
  int max = arr[0];
  
  for (int i = 1; i < arr.size(); i++)
  { 
  
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }
  cout << "Maximum element in array:" << max;
  cout << "\nMinimum element in array :" << min;
}