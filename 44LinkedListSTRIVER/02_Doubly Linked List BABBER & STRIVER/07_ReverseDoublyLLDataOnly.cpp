#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthList(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    if (head != nullptr)
    {
        head->prev = temp;
    }
    head = temp;
    return head;
}

Node *reverseDoublyLinkedList(Node *&head)
{
    Node *temp = head;
    stack<int> s;
    while (temp != NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->data = s.top();
        s.pop();
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *n1 = new Node(arr[5]);
    Node *head = n1;
    insertAtHead(head, arr[4]);
    insertAtHead(head, arr[3]);
    insertAtHead(head, arr[2]);
    insertAtHead(head, arr[1]);
    insertAtHead(head, arr[0]);
    cout << "doubly linked list is : ";
    printList(head);
    reverseDoublyLinkedList(head);
    cout << "Reversed doubly linked list is : ";
    printList(head);
    return 0;
}
/*doubly linked list is : 1 2 3 4 5 6
Reversed doubly linked list is : 6 5 4 3 2 1*/
