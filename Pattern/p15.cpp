#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of terms:  ";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {

            cout << ch << " ";
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
}
/*
enter the number of terms:  4
A
B C
D E F
G H I J
*/