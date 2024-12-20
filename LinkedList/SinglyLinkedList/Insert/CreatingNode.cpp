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

int main() {
    Node* newNode = new Node(10);
    cout << "Node data: " << newNode->data << endl;
    return 0;
}
