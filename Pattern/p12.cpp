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
        char value = ch + i - 1;
        while (j <= n)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*

enter the number of terms:  4
A B C D
B C D E
C D E F
D E F G
*/