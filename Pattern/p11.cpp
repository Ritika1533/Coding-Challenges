#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of terms:  ";
    cin >> n;
    char ch = 'a';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
            ch++;
        };

        cout << endl;
        i++;
    }
}
/*
enter the number of terms:  4
a b c d
e f g h
i j k l
m n o p
*/