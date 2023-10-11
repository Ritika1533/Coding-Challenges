#include <iostream>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "enter a number to is prime or not:";
    cin >> n;
    int ans = isPrime(n);
    if (ans == 1)
    {
        cout << "your number is prime";
    }
    else
    {
        cout << "your number is not prime";
    }
}
/*
enter a number to is prime or not:5
your number is prime
enter a number to is prime or not:20
your number is not prime
*/