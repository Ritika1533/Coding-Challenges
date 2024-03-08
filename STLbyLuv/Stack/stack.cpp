#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
/*
55
44
33
22
11
*/