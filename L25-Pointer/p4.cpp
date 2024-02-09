#include <iostream>
using namespace std;
int main()
{
    // copying a pointer
    int val = 10;
    int *p = &val;
    cout << p << endl;
    cout << *p << endl;
    int *q = p;
    cout << q << endl;
    cout << *q << endl;
}