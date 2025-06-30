#include <iostream>
using namespace std;

// Node
struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// LinkedList
class LinkedList
{
    Node *head;

public:
    // Initializing head to NULL
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        // If not empty
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        // Traversing for End Node
        while (current->next != nullptr)
        {
            current = current->next;
        }

        // Add at end
        current->next = newNode;
    }

    void insertAnyWhere(int position, int data)
    {
        Node *current = head;
        Node *newNode = new Node(data);

        if (position < 1)
        {
            cout << "Position should be >= 1." << endl;
            return;
        }
        // Insert at head
        else if (position == 1)
        {
            insertAtHead(data);
            return;
        }

        // Traversing for position
        for (int pos = 1; pos < position - 1 && current != nullptr; ++pos)
        {
            current = current->next;
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

    void deleteFirstNode()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        head = current->next;
        delete current;
    }

    void deleteLastNode()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *current = head;
        while (current->next->next != nullptr)
        {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    // Print LinkedList
    void print()
    {
        Node *current = head;

        if (head == nullptr)
        {
            cout << "List empty" << endl;
            return;
        }

        // Traversing LinkedList
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void deleteAnyPositionNode()
    {
        int position;
        cout << "Enter Position on which Node you want to delete:";
        cin >> position;

        Node *current = head;
        if (head == nullptr)
        {
            cout << "List is empty";
            return;
        }

        if (position == 1)
        {
            head = current->next;
            delete current;
            return;
        }
        // traversing for position

        for (int i = 0; i <= position - 1 && current == nullptr; i++)
        {
            current = current->next;
        }

        Node *nodeToDelete = current->next;
        current->next = nodeToDelete->next;
        delete nodeToDelete;
    }
};

int main()
{
    LinkedList list;
    list.insertAtHead(2);
    list.insertAtHead(10);
    list.insertAtHead(20);

    list.insertAtEnd(30);
    cout << "LinkedList Elements: ";
    list.print();

    // Uncomment these lines to test other functionalities

    // int position;
    // cout << "\nInsert at which position: ";
    // cin >> position;
    // list.insertAnyWhere(position, 44);

    // list.deleteFirstNode();
    //  list.deleteLastNode();
    list.deleteAnyPositionNode();

    list.print();

    return 0;
}
