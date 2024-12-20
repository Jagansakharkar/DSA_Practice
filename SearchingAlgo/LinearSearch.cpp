#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==target)
    {
      return i;
    }
  }
  return -1;
}
void printArray(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int target;
  int size=7;
  int arr[]={2,3,52,4,42,21,1};
  printArray(arr,size);

  cout<<"\nEnter Targeted Element:";
  cin>>target;
  int result=linearSearch(arr,size,target);
  
  if(result==-1)
  {
    cout<<"Element Not found";
  }
  else{
  cout<<"Targeted Element found at:";
  cout<<result;
  }

}