#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of terms:" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "IS NOT A PRIME";
    }
    else
    {
        cout << "IS A PRIME";
    }
}
/*
enter number of terms:
10
IS NOT A PRIME*/