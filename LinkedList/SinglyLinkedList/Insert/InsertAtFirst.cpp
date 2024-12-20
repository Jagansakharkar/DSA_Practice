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
class LinkedList{
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

   // print LinkedList
   void print() {
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

  list.print();
    return 0;
}
