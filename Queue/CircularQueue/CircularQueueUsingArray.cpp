#include <iostream>
using namespace std;

class CircularQueue
{
  int size;
  int rear;
  int front;
  int *circularQueue;

public:
  CircularQueue(int s)
  {
    size = s;
    front = rear = -1;
    circularQueue = new int[size];
  }

  ~CircularQueue()
  {
    delete[] circularQueue;
  }

  int insertIntoQueue(int data)
  {
    // checking if queue is full
    if (rear == size - 1)
    {
      cout << "Queue is full";
      return -1;
    }
    // add element into the queue
    circularQueue[++rear] = data;
  }

  int deleteFromCircularQueue()
  {
    // check queue is empty or not
    if (rear == front)
    {
      cout << "Queue is empty";
      return -1;
    }
    // delete from circular queue
    cout << circularQueue[rear] << endl;
    rear--;
  }
  void displayQueue()
  {
    for (int i = 0; i <= rear; i++)
    {
      cout << circularQueue[i] << " ";
    }
  }
};
int main()
{
  CircularQueue q(10);

  q.insertIntoQueue(2);
  q.insertIntoQueue(23);
  q.insertIntoQueue(21);

  q.deleteFromCircularQueue();
  q.displayQueue();
  return 0;
}