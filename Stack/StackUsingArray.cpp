#include <iostream>
using namespace std;

class Stack
{
  int *arr;
  int size;
  int top;

public:
  Stack(int s)
  {
    size = s;
    arr = new int[size];
    top = -1;
  }

  int push(int data)
  {
    if (top == size - 1)
    {
      cout << "Overflow";
      return -1;
    }

    arr[++top] = data;
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "Underflow";
      return -1;
    }
    return arr[top--];
  }

  int topElement()
  {
    if (top == -1)
    {
      cout << "Underflow";
      return -1;
    }
    return arr[top];
  }
};
int main()
{
  Stack s(10);

  s.push(2);
  s.push(10);
  s.push(13);
  s.push(20);

  cout << s.pop() << " ";

  cout << s.topElement();
  return 0;
}