#include <iostream>
#include <vector>
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

Node *deleteAtTail(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        if (head != nullptr)
        {
            delete head;
        }
        head = nullptr;
        return head;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *temp = tail->prev;
    temp->next = nullptr;
    delete tail;
    return head;
}

Node *deleteAtHead(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        if (head != nullptr)
        {
            delete head;
        }
        head = nullptr;
        return head;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
    return head;
}

Node *deleteKthElement(Node *&head, int k)
{
    // If no element or k is invalid
    if (head == nullptr || k < 0)
    {
        return head;
    }

    Node *temp = head;
    int count = 0;

    // Traverse to the k-th element
    while (temp != nullptr && count < k)
    {
        temp = temp->next;
        count++;
    }

    // If k is out of bounds
    if (temp == nullptr)
    {
        return head;
    }

    Node *back = temp->prev;
    Node *front = temp->next;

    // Case I - when single element is there
    if (back == nullptr && front == nullptr)
    {
        delete temp;
        head = nullptr;
        return head;
    }

    // Case II - when k-th element is the head
    else if (back == nullptr)
    {
        return deleteAtHead(head);
    }

    // Case III - when k-th element is the tail
    else if (front == nullptr)
    {
        return deleteAtTail(head);
    }

    // Case IV - when element is in between
    back->next = front;
    front->prev = back;
    delete temp;
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
    printList(head);
    head = deleteKthElement(head, 1);
    printList(head);
    return 0;
}