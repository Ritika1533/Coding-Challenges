#include <iostream>
using namespace std;
bool isEvenOdd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout << "enter a number to check even or add:";
    cin >> num;
    cout << endl;
    int ans = isEvenOdd(num);
    if (ans == 1)
    {
        cout << " number is EVEN";
    }
    else
    {
        cout << " number is ODD";
    }
}