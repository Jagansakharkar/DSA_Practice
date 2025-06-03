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

  void deleteFromBeginning()
  {
    Node *current = head;
    if (current == nullptr)
    {
      cout << "LinkedList is Empty";
    }
    Node *nodeTodel = head;
    head = nodeTodel->next;
    nodeTodel->next->prev = head;

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
  l.deleteFromBeginning();
  cout << "LinkedList After deleting element form beninning";
  l.display();

  return 0;
}
