#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
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
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int lengthList(Node *&head)
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

Node *deleteAtTail(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *temp = tail->prev;
    temp->next = nullptr;
    tail->prev = nullptr;
    free(tail);
    return head;
}

Node *insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
int main()
{
    vector<int> arr = {3, 7, 5, 8};
    Node *n1 = new Node(arr[3]);
    Node *head = n1;
    insertAtHead(head, arr[2]);
    insertAtHead(head, arr[1]);
    insertAtHead(head, arr[0]);
    cout << "\nlength of list :" << lengthList(head) << endl;
    printList(head);
    deleteAtTail(head);
    cout << "\nlength of list :" << lengthList(head) << endl;
    printList(head);
}
/*

length of list :4
3 7 5 8

length of list :3
3 7 5*/