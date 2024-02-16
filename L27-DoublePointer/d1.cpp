#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    int *p1 = &i;
    int **p2 = &p1;
    // print from all possible way i
    cout << "value of i" << endl
         << i << endl;
    cout << *p1 << endl;
    cout << **p2 << endl;
    // print the address of i in all possible way
    cout << "address of i" << endl
         << &i << endl;
    cout << p1 << endl;
    // print value at p1

    cout << "value at p1" << endl
         << p1 << endl;
    cout << &i << endl;
    cout << *p2 << endl;

    // address of p1
    cout << "address of p1" << endl
         << &p1 << endl;
    cout << p2 << endl;
}
/*value of i
7
7
7
address of i
0x6ffe04
0x6ffe04
value at p1
0x6ffe04
0x6ffe04
0x6ffe04
address of p1
0x6ffdf8
0x6ffdf8*/