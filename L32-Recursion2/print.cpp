#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    return print(n - 1);
}
int main()
{
    int n;
    cout << "enter the n:" << endl;
    cin >> n;
    print(n);
}