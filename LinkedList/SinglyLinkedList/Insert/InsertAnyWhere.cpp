#include<iostream>
using namespace std;

// Node
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList
class LinkedList
{
  Node* head;
  public:

  // initializing head to NULL
  LinkedList()
  {
    head=nullptr;
  }
  void insertAtHead(int data)
  {
     Node* newNode=new Node(data);
    
    // Check empty LinkedList
    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    // If not empty
    newNode->next=head;
    head=newNode;
  }

  void insertAtEnd(int data)
  {
     Node* newNode=new Node(data);
     Node* current=head;

    // Check empty LinkedList
    if(head==nullptr)
    {
        head=newNode;
        return;
    }

   // traversing for End Node
    while(current->next!=NULL)
    {
       current=current->next;
    }
  
  // Add At end
    current->next=newNode;
  
  }

  void insertAnyWhere(int position,int data)
  {
    Node* current=head;
    Node* newNode=new Node(data);

    
    if(position<1)
    {
      head=newNode;
    }
    // insert at head
    else if(position==1)
    {
     insertAtHead(data);
    return;
    }
  
  // Traversing for position
   for(int pos = 1; pos < position - 1 && current != nullptr; ++pos)
   {
     current=current->next; 
   }
  
  // Check for End
   if (current == nullptr)
   {
     cout << "Position is beyond the length of the list." << endl;
      return;
   }
   newNode->next = current->next;
  current->next = newNode;
}
  
   // print LinkedList
   void print() 
   {
        Node *current = head;
    
        if (head == nullptr) {
            cout << "List empty" << endl;
            return;
        }

      // Traversing LinkedList

        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
   }
};
    


int main() {
  LinkedList list;
  list.insertAtHead(2);
  list.insertAtHead(10);
  list.insertAtHead(20);

  list.insertAtEnd(30);
  cout<<"LinkedList Elements:";
  list.print();

  int position;
  cout<<"\nInsert Which Position Node you want to insert:";
  cin>>position;
  list.insertAnyWhere(position,44);

  list.print();

  
    return 0;
}
