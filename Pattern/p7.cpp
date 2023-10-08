#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    int n;
    cout << "enter the no of terms" << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
enter the no of terms
6
1
22
333
4444
55555
666666
*/
