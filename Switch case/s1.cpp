#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "first case" << endl;
        break;
    case 2:
        cout << "second case" << endl;
        break;
    case 3:
        cout << "third case" << endl;
        break;
    default:
        cout << "default one" << endl;
    }
}
// second case
// without break:
// decond case third case default case