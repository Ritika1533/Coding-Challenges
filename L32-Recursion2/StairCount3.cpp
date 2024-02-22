#include <iostream>
using namespace std;
int countDistintWayTolimbtairs(int n)
{
    if (n < 0)
        return;
    if (n == 0)
        return 1;
    return countDistintWayTolimbtairs(n - 1) + countDistintWayTolimbtairs(n - 2);
}

int main()
{
    int n;
    cout << "enter stairs: " << endl;
    cin >> n;
    int ans = countDistintWayTolimbtairs(n);
    cout << ans << endl;
}