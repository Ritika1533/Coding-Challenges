#include <iostream>
using namespace std;
int main()
{
    // question 1
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
    // 1

    // question 2
    int p = 1, q = 2;
    if (p-- > 0 && ++q > 2)
    {
        cout << "stage1 - indide if";
    }
    else
    {
        cout << "stage2- inside else";
    }
    cout << p << " " << q << endl;
    // stage1 - indide if 0 3

    // question 5
    /*
         int a=1;
         int b=a++;
         int c=++a;
         cout<<b;
         cout<<c;
         //1 3
         */

    // question 4
    int num = 3;
    cout << (25 * (++num));
    // 100
}

// question 3
