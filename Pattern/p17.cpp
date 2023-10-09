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
        char ch = 'A' + n - i;
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
D
C D
B C D
A B C D
*/