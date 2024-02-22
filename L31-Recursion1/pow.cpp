#include <iostream>
using namespace std;
int calPower(int x, int n)
{
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;
    int choti = calPower(x, n - 1);
    int badi = x * choti;
    return badi;
}
int main()
{
    int n, x;
    cout << "enter the x:" << endl;
    cin >> x;
    cout << "enter the n:" << endl;
    cin >> n;
    int ans = calPower(x, n);
    cout << ans;
}