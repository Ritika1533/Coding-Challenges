#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 7;
    cout << "a&b:" << (a & b) << endl;
    cout << "a|b:" << (a | b) << endl;
    cout << "~a:" << (~a) << endl;
    cout << "a^b:" << (a ^ b) << endl;
}
/*
a&b:5
a|b:7
~a:-6
a^b:2
*/