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
        cout << temp->data;
        temp = temp->next;
    }
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
int main()
{
    vector<int> arr = {3, 7, 5, 8};
    Node *n1 = new Node(arr[2]);
    Node *head = n1;
    printList(head);
    cout << "\nlength of list :";
    cout << lengthList(head);
}
/*5
length of list :1*/