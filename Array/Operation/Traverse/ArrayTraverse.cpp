#include<iostream>
using namespace std;
class Abc{
  int size;
int arr[];
  public:
  Abc()
  {
    // get the size of array
    cout<<"Enter the size of array";
    cin>>size;
    arr[size];
  }
  // add element into the array
  void addElementIntoArray()
  {
    cout<<"Add elements into the array:";
    for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }
  }
  void traverse()
  {
    // traverse array
    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
  }

};
  int main()
  {
    Abc a1;
    a1.addElementIntoArray();
    a1.traverse();
  }
