#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of terms:  ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
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
enter the number of terms:  4
A
B C
C D E
D E F G
*/