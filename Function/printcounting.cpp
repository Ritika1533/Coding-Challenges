#include <iostream>
using namespace std;
void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
}
int main()
{
    int n;
    cout << "enter the number of terms:";
    cin >> n;
    printCounting(n);
}
// enter the number of terms:5
// 1       2       3       4       5