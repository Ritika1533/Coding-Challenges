#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of row" << endl;
    cin >> row;
    int i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
1111111
2222222
3333333
4444444
5555555
6666666
7777777
*/