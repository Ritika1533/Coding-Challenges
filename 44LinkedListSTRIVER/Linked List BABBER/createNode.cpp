#include <iostream>
using namespace std;
class Node
{
public:
    int node;
    Node *next;
    // constructor
    Node(int node)
    {
        this->node = node;
        this->next = next;
    }
};
int main()
{
    Node *n1 = new Node(44);
    cout << n1->node << endl;
    cout << n1->next << endl;
} /*44
 0x1d0150
 */