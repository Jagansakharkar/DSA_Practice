#include <iostream>
using namespace std;

class Queue
{
  int *queue;
  int front, rear;
  int capacity;

public:
  Queue(int c)
  {
    capacity = c;
    front = 0;
    rear = -1;
    queue = new int[capacity];
  }
  ~Queue()
  {
    delete[] queue;
  }
  // adding from rear end

  void addElement(int data)
  {
    if (rear == capacity - 1)
    {
      cout << "Queue is Full";
      return;
    }
    queue[++rear] = data;
  }

  // remove elements form front end

  void removeElement()
  {
    if (rear < front)
    {
      cout << "Queue is Empty";
      return;
    }
    cout << queue[front] << endl;
    rear--;

    // shifting all elements from right to left

    for (int i = 0; i <= rear; i++)
    {
      queue[i] = queue[i + 1];
    }
  }

  void displayQueue()
  {
    for (int i = 0; i <= rear; i++)
    {
      cout << queue[i] << " ";
    }
  }
};
int main()
{
  Queue q(10);
  q.addElement(2);
  q.addElement(21);
  q.addElement(12);
  q.addElement(4);

  q.removeElement();

  q.displayQueue();
}