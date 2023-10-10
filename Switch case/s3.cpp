#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a:";
    cin >> a;
    cout << endl;
    cout << "enter the value of b:";
    cin >> b;
    cout << endl;
    char operation;
    cout << "enter the operation you want to perform(+ - / * % ) : ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '/':
        cout << (a / b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '%':
        cout << (a % b);
        break;
    default:
        cout << "enter a valid operation";
    }
}
