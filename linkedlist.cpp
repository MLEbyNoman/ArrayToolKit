#include <iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  Node(int value)
  {
     data = value;
     next = nullptr;
  }
  
};

void printList(Node* head) {
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "nullptr" << endl;  // Mark the end of the list
}

int main()
{
    Node* head;
    head = new Node(4);
    Node* first = new Node(14);
    Node* second = new Node(34);
    Node* third = new Node(54);

    head ->next =first;
    first -> next =second;
    second -> next = third;
    third -> next =nullptr;

    printList(head);
    
    return 0;
}