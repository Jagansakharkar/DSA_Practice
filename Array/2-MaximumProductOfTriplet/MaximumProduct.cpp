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
      cout << "To calculate product of triplet array must have three elements";
    
    }
    else{
    arr = new int[size];
    }
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

  int maxTripletProduct()
  {

    int max_product = 0;
    for (int i = 0; i < size; i++)
    {
      for (int j = i + 1; j < size; j++)
      {
        for (int k = j + 1; k < size; k++)
        {
          max_product = max(max_product,
                            arr[i] * arr[j] * arr[k]);
        }
      }
    }
    return max_product;
  }
};
int main()
{
  Abc a1;
  a1.addElement();
  int max = a1.maxTripletProduct();

  cout << "Maximum Triplet Product:" << max;
}