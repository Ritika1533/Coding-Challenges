#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    list<int> a(3, 6);
    list<int> b(a);
    // copying a into b
    for (int i : b)
    {
        cout << i << "\t";
    }
    cout << endl;
    l.push_back(56);
    l.push_back(9);
    l.push_front(33);
    l.push_front(76);
    for (int i : l)
    {
        cout << i << "\t";
    }
    l.pop_back();
    l.pop_front();
    cout << endl;
    for (int i : l)
    {
        cout << i << "\t";
    }
    cout << endl;
    cout << "size:" << l.size() << endl;
    l.erase(l.begin());
    cout << "size:" << l.size() << endl;
}