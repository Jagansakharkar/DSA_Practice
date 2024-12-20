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
}