// DEQUE
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(99);
    d.push_back(88);
    d.push_front(11);
    d.push_front(10);
    for (int i : d)
    {
        cout << i << "\t";
    }
    cout << endl;
    d.pop_back();
    d.pop_front();
    for (int i : d)
    {
        cout << i << "\t";
    }
    cout << endl;
    cout << "element at index 0:" << d.at(0) << endl;
    cout << "element at index 1:" << d.at(1) << endl;
    cout << "is deque is empty:" << d.empty() << endl;
    cout << "size of deque:" << d.max_size() << endl;
    //  cout<<"size of deque:"<<d.capacity()<<endl; not udes in this
    cout << "size before erasing  of deque:" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "size before erasing  of deque:" << d.size() << endl;
    for (int i : d)
    {
        cout << i << "\t";
    }
    cout << endl;
    d.clear();
    cout << "size before erasing  of deque:" << d.size() << endl;
}