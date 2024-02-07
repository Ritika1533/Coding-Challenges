#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *t = &i;
    cout << ++(*t) << endl; // 6
    *t = *t + 1;
    cout << *t << endl; // 7
    cout << t << endl;
    t = t + 1;
    cout << t << endl;
    char ch = 'a';
    char *c = &ch;
    cout << "before :" << c << endl;
    c = c + 1;
    cout << "after :" << c << endl;
    double dh = 8.9;
    double *d = &dh;
    cout << "before :" << d << endl;
    d = d + 1;
    cout << "after :" << d << endl;
}
/*6
7
0x6ffe04
0x6ffe08
before :a
after :
before :0x6ffdf8
after :0x6ffe00*/