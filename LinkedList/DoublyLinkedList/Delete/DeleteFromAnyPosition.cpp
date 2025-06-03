#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
  Node(int val)
  {
    data = val;
    prev = next = nullptr;
  }
};

class DoublyLinkedList
{
  Node *head;

public:
  DoublyLinkedList()
  {
    head = nullptr;
  }

  void insertAtBeginning(int data)
  {
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
      head = newNode;
      return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }

  void deleteFromPosition(int position)
  {
    Node *current = head;
    if (current == nullptr)
    {
      cout << "LinkedList is Empty";
    }

    if (position == 1)
    {
      if (current == nullptr)
      {
        cout << "LinkedList is Empty";
      }
      Node *nodeTodel = head;
      head = nodeTodel->next;
      nodeTodel->next->prev = head;

      delete nodeTodel;
    }

    for (int pos = 1; pos < position - 1; pos++)
    {
      current = current->next;
    }
    Node *nodeTodel = current->next;
    current->next = nodeTodel->next;
    nodeTodel->next->prev = current;
    delete nodeTodel;
  }

  void display()
  {
    cout << "Display LinkedList: ";
    Node *current = head;
    while (current != nullptr)
    {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

int main()
{
  DoublyLinkedList l;
  l.insertAtBeginning(5);
  l.insertAtBeginning(10);
  l.insertAtBeginning(51);
  l.insertAtBeginning(52);
  l.insertAtBeginning(15);

  l.display();

  int position;
  cout << "Enter Position on which element want to delete:";
  cin >> position;
  l.deleteFromPosition(position);

  cout << "LinkedList After deleting element from position"<<position<<"\n";

  l.display();

  return 0;
}
