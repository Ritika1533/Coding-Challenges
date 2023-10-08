#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no of terms" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
enter the no of terms
5
*
**
***
****
*****
*/