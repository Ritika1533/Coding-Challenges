#include <iostream>
using namespace std;
inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b); //(a>b)?a:b
    cout << ans << endl;
    a = a + 4;
    b = b - 2;

    ans = getMax(a, b); //(a>b)?a:b;
    cout << ans << endl;
}