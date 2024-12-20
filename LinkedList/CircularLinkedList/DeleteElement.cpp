#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            newNode->next = head;
            current->next = newNode;
            head = newNode;
        }
    }

void deleteFromBegin()
{
  Node* current=head;
  if(head==nullptr)
  {
    cout<<"List is empty"<<endl;
  }

// traversing for last node
  while(current->next!=head)
  {
    current=current->next;
  }

  // address of first node
Node* temp=head;

// add address of second node to head
head=head->next;
// first node next become null
temp->next=nullptr;

// address of last node into the first
 current->next=head;
}
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(31);
    list.insertAtBeginning(7);

    list.deleteFromBegin();
    list.display();
    return 0;
}
