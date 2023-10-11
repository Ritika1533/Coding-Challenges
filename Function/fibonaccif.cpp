#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1;
    int sum = 0;
    cout << a << "\t" << b << "\t";
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        cout << sum << "\t";
        a = b;
        b = sum;
    }
}
int main()
{
    int n;
    cout << "enter the number of terms:";
    cin >> n;
    fibonacci(n);
}
// enter the number of terms:5
// 0 1 1 2 3 5 8