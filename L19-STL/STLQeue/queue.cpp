// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("ritika");
    q.push("harsh");
    q.push("ritik");
    cout << "element at front:" << q.front() << endl;
    q.pop();
    cout << "element popped out" << endl;
    cout << "element at front:" << q.front() << endl;
    cout << "element at front:" << q.back() << endl;
    cout << "size:" << q.size() << endl;
    // q.clear();
    queue<string> emptyQueue;
    q = emptyQueue;
    cout << "size after clear:" << q.size() << endl;
}