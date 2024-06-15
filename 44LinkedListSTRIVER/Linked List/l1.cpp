#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert at head
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// print
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = temp;
}
// main function
int main()
{
    // first node
    Node *node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;
    // insertAtHead(head, 15);
    // insertAtHead(head, 10);
    // insertAtHead(head, 5);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    insertAtTail(tail, 35);
    print(head);
    return 0;
}