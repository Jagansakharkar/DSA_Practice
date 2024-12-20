#include<iostream>
using namespace std;
struct Node
{
  int data;
  Node* next;
  Node* prev;
  Node(int d)
  {
    data=d;
    next=prev=nullptr;
  }
};
class LinkedList
{
  Node* head;

  public:
  LinkedList()
  {
    head=nullptr;
  }
  void insertFirst(int data)
  {
    Node* newNode=new Node(data);
    // Checking LinkedList is Empty
    if(head==nullptr)
    {
      head=newNode;
      return;
    }

    newNode->next=head;
    head=newNode;
    newNode->prev=nullptr;
    head->prev=newNode;
  }

  void insertEnd(int data)
  {
    Node* current=head;
    Node* newNode=new Node(data);
   
   // checking linkedlist empty
    if(head==nullptr)
    {
       head=newNode;
       return;
    }

   // traversing for the end
   while(current->next!=NULL)
   {
    current=current->next;
   }
   // insert at end
   current->next=newNode;
   newNode->prev=current;
   newNode->next=nullptr;
  }

void insertAtAnyPosition(int data,int position)
{
  Node* newNode=new Node(data);
  Node* current=head;

  if(head==nullptr)
  {
    head=newNode;
    return;
  }

  for(int pos=1;pos<position-1 && current!=nullptr;pos++)
  {
    current=current->next;
  }
  newNode->next=current->next;
  current->next=newNode;
  newNode->prev=current;
 
}
  void printLinkedList()
  {
    Node* current=head;
    while(!(current==NULL))
    {
      cout<<current->data<<" ";
      current=current->next;
    }
  }
};

int main()
{
  LinkedList list;
  list.insertFirst(2);
  list.insertFirst(30);
  list.insertFirst(3);

  list.insertEnd(10);
  list.insertEnd(15);

  list.insertAtAnyPosition(20,4);
  list.printLinkedList();
  return 0;
}