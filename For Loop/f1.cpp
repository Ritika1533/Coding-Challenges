#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of terms:" << endl;
    cin >> n;
    cout << "printing number from 1 to n:" << endl;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    /*
    enter number of terms:
    7
    printing number from 1 to n:
    1
    2
    3
    4
    5
    6
    7*/
    // miltiple conditions
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << endl;
    }
    // 0 1 2
}