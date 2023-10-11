#include <iostream>
using namespace std;
int apSeries(int n)
{
    int ap = (3 * n + 7);
    return ap;
}
int main()
{
    int n;
    cout << "enter the number of terms:";
    cin >> n;
    int ans = apSeries(n);
    cout << "the output of arithematic series nth terms:" << ans;
}
// enter the number of terms:7
// the output of arithematic series nth terms:28